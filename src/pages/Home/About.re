[@react.component]
let make = () => {
  <section
    id="about"
    className="mx-auto grid max-w-7xl grid-cols-1 items-center gap-8 px-4 pb-12 sm:px-6 lg:grid lg:gap-x-8 lg:px-8 xl:grid-cols-2 xl:gap-x-12 py-8 md:py-16 lg:py-24">
    <div
      className="mx-auto flex max-w-[1000px] flex-col gap-2 md:gap-4 xl:max-w-full">
      <h2
        className="mb-2 w-full text-3xl text-ctp-text font-bold md:text-5xl lg:text-5xl">
        {React.string("A Solid Type System")}
      </h2>
      <p className="mx-auto mt-4 max-w-3xl md:text-xl lg:text-xl xl:text-xl">
        {React.string(
           "We made create-melange-app to do one thing: Streamline the setup of",
         )}
        <span className="text-ctp-peach"> {React.string(" Melange")} </span>
        {React.string("  apps.")}
      </p>
      <p className="mx-auto mt-4 max-w-3xl md:text-xl lg:text-xl xl:text-xl">
        {React.string(
           "Melange leverages OCaml's powerful type system to catch more bugs at compile time.
           Large, complex codebases become easy to maintain and refactor.",
         )}
      </p>
      <p className="mx-auto mt-4 max-w-3xl  md:text-xl lg:text-xl xl:text-xl">
        {React.string(" This is NOT an all-inclusive template.")}
        <b> {React.string(" We expect you to bring your own libraries.")} </b>
        {React.string(" Check out ")}
        <a
          href="https://www.youtube.com/watch?v=zG7JejHlQoM"
          target="_blank"
          className="text-ctp-blue">
          {React.string(
             "Melange: The next frontier in type-safe web developement",
           )}
        </a>
        {React.string(" to learn more about melange")}
      </p>
    </div>
    <div className="min-h-[300px] md:min-h-[400px]" />
  </section>;
};
