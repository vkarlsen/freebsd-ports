PORTNAME=	meld
PORTVERSION=	3.20.4
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	textproc devel python
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME visual diff and merge tool
WWW=		https://meldmerge.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	itstool:textproc/itstool
RUN_DEPENDS=	gsettings-desktop-schemas>=0:devel/gsettings-desktop-schemas

USES=		desktop-file-utils gettext gnome python:3.4+ shared-mime-info \
		shebangfix tar:xz
USE_PYTHON=	distutils noflavors
USE_GNOME=	gtksourceview3 intltool libxml2:build pygobject3

SHEBANG_FILES=	bin/meld
GLIB_SCHEMAS=	org.gnome.meld.gschema.xml
PYDISTUTILS_INSTALL_TARGET=	--no-update-icon-cache --no-compile-schemas install
NO_ARCH=	yes

PLIST_SUB=	PORTVER=${PORTVERSION}

.include <bsd.port.pre.mk>

PYDISTUTILS_INSTALLARGS=	-c -O1 --prefix=${PREFIX} --root=${STAGEDIR}

.include <bsd.port.post.mk>
