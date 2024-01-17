module App = {
  open Components;
  [@react.component]
  let make = () => {
    <> <Header /> <Sidebar /> <HomePage /> <Footer /> </>;
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
