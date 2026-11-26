// Decompiled from classes.dex (SourceFile: AccessibilityRecordCompatIcsMr1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityRecordCompatIcsMr1 {
    // Methods
    AccessibilityRecordCompatIcsMr1()
    {
      super();
    }

    public static int getMaxScrollX(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getMaxScrollX();
    }

    public static int getMaxScrollY(Object p0)
    {
      return ((android.view.accessibility.AccessibilityRecord)p0).getMaxScrollY();
    }

    public static void setMaxScrollX(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setMaxScrollX(p1);
    }

    public static void setMaxScrollY(Object p0, int p1)
    {
      ((android.view.accessibility.AccessibilityRecord)p0).setMaxScrollY(p1);
    }

}
