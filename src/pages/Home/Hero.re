[@react.component]
let make = () => {
  <main id="content">
    <div className="py-12 sm:py-8 md:py-12 lg:py-14 xl:py-12 2xl:py-28">
      <div className="mx-auto max-w-[800px] xl:max-w-7xl">
        <div className="lg:px-8">
          <div className="flex flex-col items-center">
            <div
              className="max-w-md px-4 sm:max-w-2xl sm:px-6 md:max-w-3xl lg:max-w-4xl lg:px-0 xl:max-w-5xl 2xl:max-w-6xl">
              <div className="flex w-full flex-col items-center gap-4">
                <div className="flex flex-col items-start justify-between">
                  <h1
                    className="text-center text-4xl font-bold tracking-tight sm:text-6xl sm:tracking-tight lg:text-[4rem] xl:text-[6rem] xl:tracking-tight 2xl:text-[6.5rem]">
                    {React.string("The best way to start a")}
                    <span className="text-ctp-peach">
                      {React.string(" OCaml,")}
                    </span>
                    <span className="whitespace-nowrap text-ctp-red">
                      {React.string(" ReasonML")}
                    </span>
                    <span className="text-ctp-mauve">
                      {React.string(" Melange")}
                    </span>
                    {React.string(" app")}
                  </h1>
                  <div
                    className="mt-4 flex w-full items-center justify-center gap-4 xl:mt-8">
                    <a
                      href="/en/introduction"
                      target="_self"
                      rel="noopener noreferrer"
                      className="rounded-full bg-gray-300 hover:bg-transparent hover:text-ctp-rosewater text-slate-800 group inline-flex items-center px-3 lg:px-4 lg:py-3 md:px-5 py-2 text-sm md:text-base font-semibold cursor-pointer hover:no-underline transition-colors">
                      {React.string("Documentation")}
                    </a>
                    <a
                      href="https://github.com-oss/create-app"
                      target="_blank"
                      rel="noopener noreferrer"
                      className=" rounded-full bg-white/10 hover:bg-white/20   inline-flex items-center px-3 lg:px-4 lg:py-3 md:px-5 py-2 text-sm md:text-base font-semibold cursor-pointer hover:no-underline transition-colors">
                      {React.string("GitHub")}
                    </a>
                  </div>
                  <div className="flex w-full flex-col items-center">
                    <div className="relative mt-4 flex h-full xl:mt-8">
                      <div
                        className="relative flex items-center rounded-lg border border-purple-200/20 bg-purple-100/10 px-2 py-2 text-sm md:px-3 md:py-3 md:text-lg lg:px-5 lg:py-4 lg:text-xl">
                        <code className="">
                          {React.string("npm create melange-app@latest")}
                        </code>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </main>;
};
