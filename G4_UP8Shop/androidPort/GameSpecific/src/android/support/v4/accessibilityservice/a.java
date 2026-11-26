// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.accessibilityservice;

class a extends android.support.v4.accessibilityservice.c {
    // Methods
    a()
    {
      super();
    }

    public final boolean a(android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return AccessibilityServiceInfoCompatIcs.getCanRetrieveWindowContent(p0);
    }

    public final String b(android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return AccessibilityServiceInfoCompatIcs.getDescription(p0);
    }

    public final String c(android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return AccessibilityServiceInfoCompatIcs.getId(p0);
    }

    public final android.content.pm.ResolveInfo d(android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return AccessibilityServiceInfoCompatIcs.getResolveInfo(p0);
    }

    public final String e(android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return AccessibilityServiceInfoCompatIcs.getSettingsActivityName(p0);
    }

    public int f(android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return AccessibilityServiceInfoCompatIcs.getCanRetrieveWindowContent(p0) ? 1 : 0;
    }

}
