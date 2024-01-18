[@react.component]
let make = () => {
  <header className="text-2xl top-0 z-40 w-full">
    <nav>
      <div
        className="max-w-screen-xl flex flex-wrap items-center justify-between mx-auto p-4">
        <a href="" className="flex items-center space-x-3 rtl:space-x-reverse">
          <span
            className="self-center text-2xl font-semibold whitespace-nowrap text-ctp-peach">
            {React.string("Create Melange App")}
          </span>
        </a>
        <div className="hidden w-full md:block md:w-auto" id="navbar-default">
          <ul
            className="font-medium flex flex-col p-4 md:p-0 mt-4 rounded-lg md:flex-row md:space-x-8 rtl:space-x-reverse md:mt-0 md:border-0">
            <li>
              <a
                href="#"
                className="block py-2 px-3 hover:text-[#c6a0f6] rounded text-ctp-rosewater md:p-0  ">
                {React.string("Docs")}
              </a>
            </li>
            <li>
              <a
                href="#"
                className="block py-2 px-3 hover:text-[#c6a0f6] rounded text-ctp-rosewater md:p-0  ">
                {React.string("FAQ")}
              </a>
            </li>
            <li>
              <a
                href="https://github.com/dmmulroy/create-melange-app"
                className="block py-2 px-3 hover:text-[#c6a0f6] rounded text-ctp-rosewater md:p-0  ">
                {React.string("Github")}
              </a>
            </li>
          </ul>
        </div>
      </div>
    </nav>
  </header>;
};
