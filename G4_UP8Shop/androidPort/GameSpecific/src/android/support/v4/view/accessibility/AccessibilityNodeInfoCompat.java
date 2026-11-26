// Decompiled from classes.dex (SourceFile: AccessibilityNodeInfoCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view.accessibility;

import android.os.Build;
public class AccessibilityNodeInfoCompat {
    // Fields
    public static int ACTION_ACCESSIBILITY_FOCUS;
    public static java.lang.String ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN;
    public static java.lang.String ACTION_ARGUMENT_HTML_ELEMENT_STRING;
    public static java.lang.String ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT;
    public static java.lang.String ACTION_ARGUMENT_SELECTION_END_INT;
    public static java.lang.String ACTION_ARGUMENT_SELECTION_START_INT;
    public static int ACTION_CLEAR_ACCESSIBILITY_FOCUS;
    public static int ACTION_CLEAR_FOCUS;
    public static int ACTION_CLEAR_SELECTION;
    public static int ACTION_CLICK;
    public static int ACTION_COPY;
    public static int ACTION_CUT;
    public static int ACTION_FOCUS;
    public static int ACTION_LONG_CLICK;
    public static int ACTION_NEXT_AT_MOVEMENT_GRANULARITY;
    public static int ACTION_NEXT_HTML_ELEMENT;
    public static int ACTION_PASTE;
    public static int ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY;
    public static int ACTION_PREVIOUS_HTML_ELEMENT;
    public static int ACTION_SCROLL_BACKWARD;
    public static int ACTION_SCROLL_FORWARD;
    public static int ACTION_SELECT;
    public static int ACTION_SET_SELECTION;
    public static int FOCUS_ACCESSIBILITY;
    public static int FOCUS_INPUT;
    private static final android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl IMPL;
    public static int MOVEMENT_GRANULARITY_CHARACTER;
    public static int MOVEMENT_GRANULARITY_LINE;
    public static int MOVEMENT_GRANULARITY_PAGE;
    public static int MOVEMENT_GRANULARITY_PARAGRAPH;
    public static int MOVEMENT_GRANULARITY_WORD;
    private final java.lang.Object mInfo;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 19 )
      {
        if ( Build.VERSION.SDK_INT < 18 )
        {
          if ( Build.VERSION.SDK_INT < 16 )
          {
            if ( Build.VERSION.SDK_INT < 14 )
              IMPL = (android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl)new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl();
            else
              IMPL = (android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl)new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl();
          }
          else
          {
            IMPL = (android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl)new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl();
          }
        }
        else
        {
          IMPL = (android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl)new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanMr2Impl();
        }
      }
      else
      {
        IMPL = (android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl)new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl();
      }
    }

    public AccessibilityNodeInfoCompat(Object p0)
    {
      super();
      this.mInfo = p0;
    }

    private static String getActionSymbolicName(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 1:
          v1 = "ACTION_FOCUS";
          break;
        case 2:
          v1 = "ACTION_CLEAR_FOCUS";
          break;
        case 4:
          v1 = "ACTION_SELECT";
          break;
        case 8:
          v1 = "ACTION_CLEAR_SELECTION";
          break;
        case 0x10:
          v1 = "ACTION_CLICK";
          break;
        case 0x20:
          v1 = "ACTION_LONG_CLICK";
          break;
        case 0x40:
          v1 = "ACTION_ACCESSIBILITY_FOCUS";
          break;
        case 0x80:
          v1 = "ACTION_CLEAR_ACCESSIBILITY_FOCUS";
          break;
        case 0x100:
          v1 = "ACTION_NEXT_AT_MOVEMENT_GRANULARITY";
          break;
        case 0x200:
          v1 = "ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY";
          break;
        case 0x400:
          v1 = "ACTION_NEXT_HTML_ELEMENT";
          break;
        case 0x800:
          v1 = "ACTION_PREVIOUS_HTML_ELEMENT";
          break;
        case 0x1000:
          v1 = "ACTION_SCROLL_FORWARD";
          break;
        case 0x2000:
          v1 = "ACTION_SCROLL_BACKWARD";
          break;
        case 0x4000:
          v1 = "ACTION_COPY";
          break;
        case 0x8000:
          v1 = "ACTION_PASTE";
          break;
        case 0x10000:
          v1 = "ACTION_CUT";
          break;
        case 0x20000:
          v1 = "ACTION_SET_SELECTION";
          break;
        default:
          v1 = "ACTION_UNKNOWN";
          break;
      }
      return v1;
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain()
    {
      return wrapNonNullInstance(IMPL.obtain());
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain(
            android.support.v4.view.accessibility.AccessibilityNodeInfoCompat p0)
    {
      return wrapNonNullInstance(IMPL.obtain(p0.mInfo));
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain(
            android.view.View p0)
    {
      return wrapNonNullInstance(IMPL.obtain(p0));
    }

    public static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat obtain(
            android.view.View p0,
            int p1)
    {
      return wrapNonNullInstance(IMPL.obtain(p0, p1));
    }

    static android.support.v4.view.accessibility.AccessibilityNodeInfoCompat wrapNonNullInstance(
            Object p0)
    {
      if ( p0 != null )
        return new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat(p0);
      else
        return null;
    }

    public void addAction(int p0)
    {
      IMPL.addAction(this.mInfo, p0);
    }

    public void addChild(android.view.View p0)
    {
      IMPL.addChild(this.mInfo, p0);
    }

    public void addChild(android.view.View p0, int p1)
    {
      IMPL.addChild(this.mInfo, p0, p1);
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      android.support.v4.view.accessibility.AccessibilityNodeInfoCompat v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 != null )
        {
          if ( this.getClass() == p0.getClass() )
          {
            v4 = (android.support.v4.view.accessibility.AccessibilityNodeInfoCompat)p0;
            if ( this.mInfo != null )
              return this.mInfo.equals(v4.mInfo);
            else
              return v4.mInfo == null;
          }
          else
          {
            return false;
          }
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public java.util.List<android.support.v4.view.accessibility.AccessibilityNodeInfoCompat> findAccessibilityNodeInfosByText(
            String p0)
    {
      java.util.List v2;
      java.util.List AccessibilityNodeInfosByText;
      int v4;
      int i;
      v2 = new java.util.ArrayList();
      AccessibilityNodeInfosByText = IMPL.findAccessibilityNodeInfosByText(this.mInfo, p0);
      v4 = AccessibilityNodeInfosByText.size();
      for ( i = 0; i < v4; ++i )
        v2.add(new android.support.v4.view.accessibility.AccessibilityNodeInfoCompat(AccessibilityNodeInfosByText.get(i)));
      return v2;
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat findFocus(int p0)
    {
      return wrapNonNullInstance(IMPL.findFocus(this.mInfo, p0));
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat focusSearch(
            int p0)
    {
      return wrapNonNullInstance(IMPL.focusSearch(this.mInfo, p0));
    }

    public int getActions()
    {
      return IMPL.getActions(this.mInfo);
    }

    public void getBoundsInParent(android.graphics.Rect p0)
    {
      IMPL.getBoundsInParent(this.mInfo, p0);
    }

    public void getBoundsInScreen(android.graphics.Rect p0)
    {
      IMPL.getBoundsInScreen(this.mInfo, p0);
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getChild(int p0)
    {
      return wrapNonNullInstance(IMPL.getChild(this.mInfo, p0));
    }

    public int getChildCount()
    {
      return IMPL.getChildCount(this.mInfo);
    }

    public CharSequence getClassName()
    {
      return IMPL.getClassName(this.mInfo);
    }

    public CharSequence getContentDescription()
    {
      return IMPL.getContentDescription(this.mInfo);
    }

    public Object getInfo()
    {
      return this.mInfo;
    }

    public int getLiveRegion()
    {
      return IMPL.getLiveRegion(this.mInfo);
    }

    public int getMovementGranularities()
    {
      return IMPL.getMovementGranularities(this.mInfo);
    }

    public CharSequence getPackageName()
    {
      return IMPL.getPackageName(this.mInfo);
    }

    public android.support.v4.view.accessibility.AccessibilityNodeInfoCompat getParent()
    {
      return wrapNonNullInstance(IMPL.getParent(this.mInfo));
    }

    public CharSequence getText()
    {
      return IMPL.getText(this.mInfo);
    }

    public String getViewIdResourceName()
    {
      return IMPL.getViewIdResourceName(this.mInfo);
    }

    public int getWindowId()
    {
      return IMPL.getWindowId(this.mInfo);
    }

    public int hashCode()
    {
      if ( this.mInfo != null )
        return this.mInfo.hashCode();
      else
        return 0;
    }

    public boolean isAccessibilityFocused()
    {
      return IMPL.isAccessibilityFocused(this.mInfo);
    }

    public boolean isCheckable()
    {
      return IMPL.isCheckable(this.mInfo);
    }

    public boolean isChecked()
    {
      return IMPL.isChecked(this.mInfo);
    }

    public boolean isClickable()
    {
      return IMPL.isClickable(this.mInfo);
    }

    public boolean isEnabled()
    {
      return IMPL.isEnabled(this.mInfo);
    }

    public boolean isFocusable()
    {
      return IMPL.isFocusable(this.mInfo);
    }

    public boolean isFocused()
    {
      return IMPL.isFocused(this.mInfo);
    }

    public boolean isLongClickable()
    {
      return IMPL.isLongClickable(this.mInfo);
    }

    public boolean isPassword()
    {
      return IMPL.isPassword(this.mInfo);
    }

    public boolean isScrollable()
    {
      return IMPL.isScrollable(this.mInfo);
    }

    public boolean isSelected()
    {
      return IMPL.isSelected(this.mInfo);
    }

    public boolean isVisibleToUser()
    {
      return IMPL.isVisibleToUser(this.mInfo);
    }

    public boolean performAction(int p0)
    {
      return IMPL.performAction(this.mInfo, p0);
    }

    public boolean performAction(int p0, android.os.Bundle p1)
    {
      return IMPL.performAction(this.mInfo, p0, p1);
    }

    public void recycle()
    {
      IMPL.recycle(this.mInfo);
    }

    public void setAccessibilityFocused(boolean p0)
    {
      IMPL.setAccessibilityFocused(this.mInfo, p0);
    }

    public void setBoundsInParent(android.graphics.Rect p0)
    {
      IMPL.setBoundsInParent(this.mInfo, p0);
    }

    public void setBoundsInScreen(android.graphics.Rect p0)
    {
      IMPL.setBoundsInScreen(this.mInfo, p0);
    }

    public void setCheckable(boolean p0)
    {
      IMPL.setCheckable(this.mInfo, p0);
    }

    public void setChecked(boolean p0)
    {
      IMPL.setChecked(this.mInfo, p0);
    }

    public void setClassName(CharSequence p0)
    {
      IMPL.setClassName(this.mInfo, p0);
    }

    public void setClickable(boolean p0)
    {
      IMPL.setClickable(this.mInfo, p0);
    }

    public void setContentDescription(CharSequence p0)
    {
      IMPL.setContentDescription(this.mInfo, p0);
    }

    public void setEnabled(boolean p0)
    {
      IMPL.setEnabled(this.mInfo, p0);
    }

    public void setFocusable(boolean p0)
    {
      IMPL.setFocusable(this.mInfo, p0);
    }

    public void setFocused(boolean p0)
    {
      IMPL.setFocused(this.mInfo, p0);
    }

    public void setLiveRegion(int p0)
    {
      IMPL.setLiveRegion(this.mInfo, p0);
    }

    public void setLongClickable(boolean p0)
    {
      IMPL.setLongClickable(this.mInfo, p0);
    }

    public void setMovementGranularities(int p0)
    {
      IMPL.setMovementGranularities(this.mInfo, p0);
    }

    public void setPackageName(CharSequence p0)
    {
      IMPL.setPackageName(this.mInfo, p0);
    }

    public void setParent(android.view.View p0)
    {
      IMPL.setParent(this.mInfo, p0);
    }

    public void setParent(android.view.View p0, int p1)
    {
      IMPL.setParent(this.mInfo, p0, p1);
    }

    public void setPassword(boolean p0)
    {
      IMPL.setPassword(this.mInfo, p0);
    }

    public void setScrollable(boolean p0)
    {
      IMPL.setScrollable(this.mInfo, p0);
    }

    public void setSelected(boolean p0)
    {
      IMPL.setSelected(this.mInfo, p0);
    }

    public void setSource(android.view.View p0)
    {
      IMPL.setSource(this.mInfo, p0);
    }

    public void setSource(android.view.View p0, int p1)
    {
      IMPL.setSource(this.mInfo, p0, p1);
    }

    public void setText(CharSequence p0)
    {
      IMPL.setText(this.mInfo, p0);
    }

    public void setViewIdResourceName(String p0)
    {
      IMPL.setViewIdResourceName(this.mInfo, p0);
    }

    public void setVisibleToUser(boolean p0)
    {
      IMPL.setVisibleToUser(this.mInfo, p0);
    }

    public String toString()
    {
      StringBuilder v1;
      android.graphics.Rect v2;
      int Actions;
      int v4;
      v1 = new StringBuilder();
      v1.append(super.toString());
      v2 = new android.graphics.Rect();
      this.getBoundsInParent(v2);
      v1.append("; boundsInParent: " + v2);
      this.getBoundsInScreen(v2);
      v1.append("; boundsInScreen: " + v2);
      v1.append("; packageName: ").append(this.getPackageName());
      v1.append("; className: ").append(this.getClassName());
      v1.append("; text: ").append(this.getText());
      v1.append("; contentDescription: ").append(this.getContentDescription());
      v1.append("; viewId: ").append(this.getViewIdResourceName());
      v1.append("; checkable: ").append(this.isCheckable());
      v1.append("; checked: ").append(this.isChecked());
      v1.append("; focusable: ").append(this.isFocusable());
      v1.append("; focused: ").append(this.isFocused());
      v1.append("; selected: ").append(this.isSelected());
      v1.append("; clickable: ").append(this.isClickable());
      v1.append("; longClickable: ").append(this.isLongClickable());
      v1.append("; enabled: ").append(this.isEnabled());
      v1.append("; password: ").append(this.isPassword());
      v1.append("; scrollable: " + this.isScrollable());
      v1.append("; [");
      Actions = this.getActions();
      while ( Actions != 0 )
      {
        v4 = (int)Integer.numberOfTrailingZeros(Actions);
        Actions &= ~(1 << (byte)v4);
        v1.append(getActionSymbolicName(1 << (byte)v4));
        if ( Actions != 0 )
          v1.append(", ");
      }
      v1.append("]");
      return v1.toString();
    }

}
