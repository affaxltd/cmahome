[@react.component]
let make = () => {
  <header className="text-[#b8c0e0] text-2xl">
    <h3 className="font-bold text-3xl mb-2">
      <>
        {React.string("Your")}
        <span
          className="bg-gradient-to-r from-[#f5bde6] to-[#c6a0f6] bg-clip-text text-transparent">
          {React.string(" Header ")}
        </span>
      </>
    </h3>
  </header>;
};
