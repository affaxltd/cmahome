(lang dune 3.11)

(using melange 0.1)

(using directory-targets 0.1)

(name cmahome)

(generate_opam_files true)

(source
 (github your-username/cmahome))

(authors "Your Name <your.email@gmail.com>")

(maintainers "Your Name <your.email@gmail.com>")

(license MIT)

(documentation https://github.com/your-username/cmahome)

(package
 (name cmahome)
 (synopsis "Enter a synopsis of your app here")
 (description "Enter a description of your app here")
 (allow_empty) 
 (depends
  (dune (>= 3.11))
  (melange (>= 2.1.0))
  (ocaml (>= 5.1.0))
  opam-check-npm-deps
  ppx_deriving
  (reason (>= 3.10.0))
  (reason-react (>= 0.13.0))
  reason-react-ppx
)
 (tags
  (reasonml, ocaml, melange)))

