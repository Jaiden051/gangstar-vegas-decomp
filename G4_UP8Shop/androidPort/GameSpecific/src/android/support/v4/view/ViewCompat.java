// Decompiled from classes.dex (SourceFile: ViewCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class ViewCompat {
    // Fields
    public static int ACCESSIBILITY_LIVE_REGION_ASSERTIVE;
    public static int ACCESSIBILITY_LIVE_REGION_NONE;
    public static int ACCESSIBILITY_LIVE_REGION_POLITE;
    private static long FAKE_FRAME_TIME;
    static final android.support.v4.view.ViewCompat$ViewCompatImpl IMPL;
    public static int IMPORTANT_FOR_ACCESSIBILITY_AUTO;
    public static int IMPORTANT_FOR_ACCESSIBILITY_NO;
    public static int IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS;
    public static int IMPORTANT_FOR_ACCESSIBILITY_YES;
    public static int LAYER_TYPE_HARDWARE;
    public static int LAYER_TYPE_NONE;
    public static int LAYER_TYPE_SOFTWARE;
    public static int LAYOUT_DIRECTION_INHERIT;
    public static int LAYOUT_DIRECTION_LOCALE;
    public static int LAYOUT_DIRECTION_LTR;
    public static int LAYOUT_DIRECTION_RTL;
    public static int MEASURED_HEIGHT_STATE_SHIFT;
    public static int MEASURED_SIZE_MASK;
    public static int MEASURED_STATE_MASK;
    public static int MEASURED_STATE_TOO_SMALL;
    public static int OVER_SCROLL_ALWAYS;
    public static int OVER_SCROLL_IF_CONTENT_SCROLLS;
    public static int OVER_SCROLL_NEVER;

    // Methods
    static
    {
      int v0;
      v0 = Build.VERSION.SDK_INT;
      if ( v0 < 19 )
      {
        if ( v0 < 17 )
        {
          if ( v0 < 16 )
          {
            if ( v0 < 14 )
            {
              if ( v0 < 11 )
              {
                if ( v0 < 9 )
                  IMPL = (android.support.v4.view.ViewCompat$ViewCompatImpl)new android.support.v4.view.ViewCompat$BaseViewCompatImpl();
                else
                  IMPL = (android.support.v4.view.ViewCompat$ViewCompatImpl)new android.support.v4.view.ViewCompat$GBViewCompatImpl();
              }
              else
              {
                IMPL = (android.support.v4.view.ViewCompat$ViewCompatImpl)new android.support.v4.view.ViewCompat$HCViewCompatImpl();
              }
            }
            else
            {
              IMPL = (android.support.v4.view.ViewCompat$ViewCompatImpl)new android.support.v4.view.ViewCompat$ICSViewCompatImpl();
            }
          }
          else
          {
            IMPL = (android.support.v4.view.ViewCompat$ViewCompatImpl)new android.support.v4.view.ViewCompat$JBViewCompatImpl();
          }
        }
        else
        {
          IMPL = (android.support.v4.view.ViewCompat$ViewCompatImpl)new android.support.v4.view.ViewCompat$JbMr1ViewCompatImpl();
        }
      }
      else
      {
        IMPL = (android.support.v4.view.ViewCompat$ViewCompatImpl)new android.support.v4.view.ViewCompat$KitKatViewCompatImpl();
      }
    }

    public ViewCompat()
    {
      super();
    }

    public static boolean canScrollHorizontally(android.view.View p0, int p1)
    {
      return IMPL.canScrollHorizontally(p0, p1);
    }

    public static boolean canScrollVertically(android.view.View p0, int p1)
    {
      return IMPL.canScrollVertically(p0, p1);
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeProviderCompat getAccessibilityNodeProvider(
            android.view.View p0)
    {
      return IMPL.getAccessibilityNodeProvider(p0);
    }

    public static float getAlpha(android.view.View p0)
    {
      return IMPL.getAlpha(p0);
    }

    public static int getImportantForAccessibility(android.view.View p0)
    {
      return IMPL.getImportantForAccessibility(p0);
    }

    public static int getLabelFor(android.view.View p0)
    {
      return IMPL.getLabelFor(p0);
    }

    public static int getLayerType(android.view.View p0)
    {
      return IMPL.getLayerType(p0);
    }

    public static int getLayoutDirection(android.view.View p0)
    {
      return IMPL.getLayoutDirection(p0);
    }

    public static int getMeasuredHeightAndState(android.view.View p0)
    {
      return IMPL.getMeasuredHeightAndState(p0);
    }

    public static int getMeasuredState(android.view.View p0)
    {
      return IMPL.getMeasuredState(p0);
    }

    public static int getMeasuredWidthAndState(android.view.View p0)
    {
      return IMPL.getMeasuredWidthAndState(p0);
    }

    public static int getOverScrollMode(android.view.View p0)
    {
      return IMPL.getOverScrollMode(p0);
    }

    public static android.view.ViewParent getParentForAccessibility(android.view.View p0)
    {
      return IMPL.getParentForAccessibility(p0);
    }

    public static boolean hasTransientState(android.view.View p0)
    {
      return IMPL.hasTransientState(p0);
    }

    public static boolean isOpaque(android.view.View p0)
    {
      return IMPL.isOpaque(p0);
    }

    public static void onInitializeAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      IMPL.onInitializeAccessibilityEvent(p0, p1);
    }

    public static void onInitializeAccessibilityNodeInfo(
            android.view.View p0,
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p1)
    {
      IMPL.onInitializeAccessibilityNodeInfo(p0, p1);
    }

    public static void onPopulateAccessibilityEvent(
            android.view.View p0,
            android.view.accessibility.AccessibilityEvent p1)
    {
      IMPL.onPopulateAccessibilityEvent(p0, p1);
    }

    public static boolean performAccessibilityAction(android.view.View p0, int p1, android.os.Bundle p2)
    {
      return IMPL.performAccessibilityAction(p0, p1, p2);
    }

    public static void postInvalidateOnAnimation(android.view.View p0)
    {
      IMPL.postInvalidateOnAnimation(p0);
    }

    public static void postInvalidateOnAnimation(android.view.View p0, int p1, int p2, int p3, int p4)
    {
      IMPL.postInvalidateOnAnimation(p0, p1, p2, p3, p4);
    }

    public static void postOnAnimation(android.view.View p0, Runnable p1)
    {
      IMPL.postOnAnimation(p0, p1);
    }

    public static void postOnAnimationDelayed(android.view.View p0, Runnable p1, long p2)
    {
      IMPL.postOnAnimationDelayed(p0, p1, p2);
    }

    public static int resolveSizeAndState(int p0, int p1, int p2)
    {
      return IMPL.resolveSizeAndState(p0, p1, p2);
    }

    public static void setAccessibilityDelegate(
            android.view.View p0,
            android.support.v4.view.AccessibilityDelegateCompat p1)
    {
      IMPL.setAccessibilityDelegate(p0, p1);
    }

    public static void setHasTransientState(android.view.View p0, boolean p1)
    {
      IMPL.setHasTransientState(p0, p1);
    }

    public static void setImportantForAccessibility(android.view.View p0, int p1)
    {
      IMPL.setImportantForAccessibility(p0, p1);
    }

    public static void setLabelFor(android.view.View p0, int p1)
    {
      IMPL.setLabelFor(p0, p1);
    }

    public static void setLayerPaint(android.view.View p0, android.graphics.Paint p1)
    {
      IMPL.setLayerPaint(p0, p1);
    }

    public static void setLayerType(android.view.View p0, int p1, android.graphics.Paint p2)
    {
      IMPL.setLayerType(p0, p1, p2);
    }

    public static void setLayoutDirection(android.view.View p0, int p1)
    {
      IMPL.setLayoutDirection(p0, p1);
    }

    public static void setOverScrollMode(android.view.View p0, int p1)
    {
      IMPL.setOverScrollMode(p0, p1);
    }

    public int getAccessibilityLiveRegion(android.view.View p0)
    {
      return IMPL.getAccessibilityLiveRegion(p0);
    }

    public void setAccessibilityLiveRegion(android.view.View p0, int p1)
    {
      IMPL.setAccessibilityLiveRegion(p0, p1);
    }

}
