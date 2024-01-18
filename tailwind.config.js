/** @type {import('tailwindcss').Config} */
export default {
  content: ["./index.html", "./src/**/*.{js,ts,jsx,tsx,ml,re}"],
  theme: {
    extend: {},
  },
  plugins: [
    require("@catppuccin/tailwindcss")({
      // prefix to use, e.g. `text-pink` becomes `text-ctp-pink`.
      // default is `false`, which means no prefix
      prefix: "ctp",
      // which flavour of colours to use by default, in the `:root`
      defaultFlavour: "macchiato",
    }),
  ],
};
