// Decompiled from classes.dex (SourceFile: AccessibilityEventCompatIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityEventCompatIcs {
    // Methods
    AccessibilityEventCompatIcs()
    {
      super();
    }

    public static void appendRecord(
            android.view.accessibility.AccessibilityEvent p0,
            Object p1)
    {
      p0.appendRecord((android.view.accessibility.AccessibilityRecord)p1);
    }

    public static Object getRecord(android.view.accessibility.AccessibilityEvent p0, int p1)
    {
      return p0.getRecord(p1);
    }

    public static int getRecordCount(android.view.accessibility.AccessibilityEvent p0)
    {
      return p0.getRecordCount();
    }

}
