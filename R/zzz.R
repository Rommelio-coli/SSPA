.onAttach <- function(lib, pkg)
  {
    ##load compiled C-code
    library.dynam("SSPA", pkg, lib)

    if(interactive() && .Platform$OS.type == "windows" && .Platform$GUI == "Rgui"){
      addVigs2WinMenu("SSPA")
    }

  }

