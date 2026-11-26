// Decompiled from classes.dex (SourceFile: AccessibilityEventCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

import android.os.Build;
public class AccessibilityEventCompat {
    // Fields
    private static final android.support.v4.view.accessibility.AccessibilityEventCompat$AccessibilityEventVersionImpl IMPL;
    public static int TYPES_ALL_MASK;
    public static int TYPE_ANNOUNCEMENT;
    public static int TYPE_GESTURE_DETECTION_END;
    public static int TYPE_GESTURE_DETECTION_START;
    public static int TYPE_TOUCH_EXPLORATION_GESTURE_END;
    public static int TYPE_TOUCH_EXPLORATION_GESTURE_START;
    public static int TYPE_TOUCH_INTERACTION_END;
    public static int TYPE_TOUCH_INTERACTION_START;
    public static int TYPE_VIEW_ACCESSIBILITY_FOCUSED;
    public static int TYPE_VIEW_ACCESSIBILITY_FOCUS_CLEARED;
    public static int TYPE_VIEW_HOVER_ENTER;
    public static int TYPE_VIEW_HOVER_EXIT;
    public static int TYPE_VIEW_SCROLLED;
    public static int TYPE_VIEW_TEXT_SELECTION_CHANGED;
    public static int TYPE_VIEW_TEXT_TRAVERSED_AT_MOVEMENT_GRANULARITY;
    public static int TYPE_WINDOW_CONTENT_CHANGED;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 14 )
        IMPL = (android.support.v4.view.accessibility.AccessibilityEventCompat$AccessibilityEventVersionImpl)new android.support.v4.view.accessibility.AccessibilityEventCompat$AccessibilityEventStubImpl();
      else
        IMPL = (android.support.v4.view.accessibility.AccessibilityEventCompat$AccessibilityEventVersionImpl)new android.support.v4.view.accessibility.AccessibilityEventCompat$AccessibilityEventIcsImpl();
    }

    private AccessibilityEventCompat()
    {
      super();
    }

    public static void appendRecord(
            android.view.accessibility.AccessibilityEvent p0,
            android.support.v4.view.accessibility.AccessibilityRecordCompat p1)
    {
      IMPL.appendRecord(p0, p1.getImpl());
    }

    public static android.support.v4.view.accessibility.AccessibilityRecordCompat asRecord(
            android.view.accessibility.AccessibilityEvent p0)
    {
      return new android.support.v4.view.accessibility.AccessibilityRecordCompat(p0);
    }

    public static android.support.v4.view.accessibility.AccessibilityRecordCompat getRecord(
            android.view.accessibility.AccessibilityEvent p0,
            int p1)
    {
      return new android.support.v4.view.accessibility.AccessibilityRecordCompat(IMPL.getRecord(p0, p1));
    }

    public static int getRecordCount(android.view.accessibility.AccessibilityEvent p0)
    {
      return IMPL.getRecordCount(p0);
    }

}
