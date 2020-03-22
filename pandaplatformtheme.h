#ifndef PANDAPLATFORMTHEME_H
#define PANDAPLATFORMTHEME_H

#include <qpa/qplatformtheme.h>
#include "hintsettings.h"

#include <QHash>
#include <QKeySequence>

class QIconEngine;
class QWindow;
class X11Integration;

class PandaPlatformTheme : public QPlatformTheme
{
public:
    PandaPlatformTheme();
    ~PandaPlatformTheme() override;

    QVariant themeHint(ThemeHint hint) const override;

    QPlatformMenuBar *createPlatformMenuBar() const override;

private:
    HintsSettings *m_hints;
    QScopedPointer<X11Integration> m_x11Integration;
};

#endif // PANDAPLATFORMTHEME_H
