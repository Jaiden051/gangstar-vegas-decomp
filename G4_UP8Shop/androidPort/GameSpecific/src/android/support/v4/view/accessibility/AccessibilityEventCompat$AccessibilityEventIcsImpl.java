// Decompiled from classes.dex (SourceFile: AccessibilityEventCompat$AccessibilityEventIcsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

class AccessibilityEventCompat$AccessibilityEventIcsImpl extends android.support.v4.view.accessibility.AccessibilityEventCompat$AccessibilityEventStubImpl {
    // Methods
    AccessibilityEventCompat$AccessibilityEventIcsImpl()
    {
      super();
    }

    public void appendRecord(
            android.view.accessibility.AccessibilityEvent p0,
            Object p1)
    {
      AccessibilityEventCompatIcs.appendRecord(p0, p1);
    }

    public Object getRecord(
            android.view.accessibility.AccessibilityEvent p0,
            int p1)
    {
      return AccessibilityEventCompatIcs.getRecord(p0, p1);
    }

    public int getRecordCount(
            android.view.accessibility.AccessibilityEvent p0)
    {
      return AccessibilityEventCompatIcs.getRecordCount(p0);
    }

}
