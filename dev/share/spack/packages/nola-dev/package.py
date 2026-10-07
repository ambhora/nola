from spack.package import *


class NolaDev(BundlePackage):
    """Development environment for nola."""

    version("1.0")

    variant("test", default=False, description="Install test dependencies")

    depends_on("besa")
    depends_on("catch2", when="+test")
