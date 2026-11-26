// Decompiled from classes.dex (SourceFile: AccessibilityServiceInfoCompatIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.accessibilityservice;

class AccessibilityServiceInfoCompatIcs {
    // Methods
    AccessibilityServiceInfoCompatIcs()
    {
      super();
    }

    public static boolean getCanRetrieveWindowContent(
            android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return p0.getCanRetrieveWindowContent();
    }

    public static String getDescription(
            android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return p0.getDescription();
    }

    public static String getId(android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return p0.getId();
    }

    public static android.content.pm.ResolveInfo getResolveInfo(
            android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return p0.getResolveInfo();
    }

    public static String getSettingsActivityName(
            android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return p0.getSettingsActivityName();
    }

}
