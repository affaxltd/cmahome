module App = {
  [@react.component]
  let make = () => {
    let (show_configuration, setShow_configuration) =
      React.useState(() => false);

    let configuration =
      Create_melange_app.Configuration.make(
        ~name="cmahome",
        ~directory="/home/affax/projects/cmahome",
        ~node_package_manager=Bun,
        ~bundler=Vite,
        ~is_react_app=true,
        ~initialize_git=true,
        ~initialize_npm=true,
        ~initialize_ocaml_toolchain=true,
        ()
      );

    /*
     * Because ReasonML has a stronger type system than TypeScript, we have
     * different variants of `useEffect` depending on the number of dependencies
     * we have in our effect.
     *
     * For example, if we have no dependencies, we use `useEffect0`.
     * The equivalent in JavaScript would be `useEffect(() => {}, [])`
     *
     * If we have one dependency, we use `useEffect1`.
     * The equivalent in JavaScript would be `useEffect(() => {}, [dependency])`
     */
    React.useEffect0(() => {
      let timeout_id =
        Js.Global.setTimeout(() => setShow_configuration(_ => true), 1000);

      // Return a cleanup function to cancel the timeout
      // If we didn't need a cleanup function, we would return `None` instead of
      // `Some(() => Js.Global.clearTimeout(timeout_id))`
      Some(() => Js.Global.clearTimeout(timeout_id));
    });

    <>
      <div className="h-[15%]" />
      <div
        className="flex flex-col items-center justify-center rounded-3xl bg-gradient-to-b from-[#24273a] to-[#181926] p-6 shadow outline outline-2 outline-[#f5bde6]">
        <h1
          className="mb-2 pb-1 bg-gradient-to-r from-[#f5bde6] to-[#c6a0f6] bg-clip-text text-7xl font-black text-transparent">
          {React.string("create-melange-app")}
        </h1>
        <h2
          className="mb-3 border-b-2 bg-gradient-to-r from-[#ee99a0] to-[#f5a97f] bg-clip-text text-4xl  font-black text-transparent pb-1">
          {React.string("Welcome to Melange & OCaml!")}
        </h2>
        {show_configuration ? <Configuration configuration /> : React.null}
      </div>
    </>;
  };
};

ReactDOM.querySelector("#root")
->(
    fun
    | Some(root) => ReactDOM.render(<App />, root)
    | None =>
      Js.Console.error(
        "Failed to start React: couldn't find the #root element",
      )
  );

