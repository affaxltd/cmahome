open Home;

module HomePage = {
  open Components;
  [@react.component]
  let make = () => {
    <> <Header /> <HomePage /> <Footer /> </>;
  };
};
