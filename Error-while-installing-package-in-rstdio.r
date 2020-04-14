// link: https://stackoverflow.com/questions/60931046/error-while-installing-package-in-rstudio/60931784#60931784

install_github("github_UsernameOfAuthor/repository_name")

install_bitbucket("package_Author/repository_name")

install_gitorious("package_Author/repository_name")

install.packages("package_name", repos="http://R-Forge.R-project.org")

install.packages("package_name", repos="URL")`.

# Install directly from CRAN:
if(!require(devtools))install.packages("devtools")
devtools::install.packages("package_name")

# Install via Github:
if(!require(devtools))install.packages("devtools")
devtools::install_github("githubAuthor_username/package_name")

# Install via R-Forge or any other repository holding website:
if(!require(devtools))install.packages("devtools")
devtools::install.packages("package_name",repos="website-link")
