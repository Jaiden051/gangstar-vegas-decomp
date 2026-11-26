// Decompiled from classes.dex (SourceFile: AccessibilityServiceInfoCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.accessibilityservice;

import android.os.Build;
public class AccessibilityServiceInfoCompat {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    public static int l;
    private static final android.support.v4.accessibilityservice.d m;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 18 )
      {
        if ( Build.VERSION.SDK_INT < 14 )
          m = (android.support.v4.accessibilityservice.d)new android.support.v4.accessibilityservice.c();
        else
          m = (android.support.v4.accessibilityservice.d)new android.support.v4.accessibilityservice.a();
      }
      else
      {
        m = (android.support.v4.accessibilityservice.d)new android.support.v4.accessibilityservice.b();
      }
    }

    private AccessibilityServiceInfoCompat()
    {
      super();
    }

    public static String capabilityToString(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 1:
          v1 = "CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT";
          break;
        case 2:
          v1 = "CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION";
          break;
        case 4:
          v1 = "CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY";
          break;
        case 8:
          v1 = "CAPABILITY_CAN_FILTER_KEY_EVENTS";
          break;
        default:
          v1 = "UNKNOWN";
          break;
      }
      return v1;
    }

    public static String feedbackTypeToString(int p0)
    {
      StringBuilder v1;
      int v2;
      v1 = new StringBuilder();
      v1.append("[");
      while ( p0 > 0 )
      {
        v2 = 1 << Integer.numberOfTrailingZeros(p0);
        p0 &= ~v2;
        if ( v1.length() > 1 )
          v1.append(", ");
        switch ( v2 )
        {
          case 1:
            v1.append("FEEDBACK_SPOKEN");
            break;
          case 2:
            v1.append("FEEDBACK_HAPTIC");
            break;
          case 4:
            v1.append("FEEDBACK_AUDIBLE");
            break;
          case 8:
            v1.append("FEEDBACK_VISUAL");
            break;
          case 16:
            v1.append("FEEDBACK_GENERIC");
            break;
          default:
            continue;
        }
      }
      v1.append("]");
      return v1.toString();
    }

    public static String flagToString(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 1:
          v1 = "DEFAULT";
          break;
        case 2:
          v1 = "FLAG_INCLUDE_NOT_IMPORTANT_VIEWS";
          break;
        case 4:
          v1 = "FLAG_REQUEST_TOUCH_EXPLORATION_MODE";
          break;
        case 8:
          v1 = "FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY";
          break;
        case 16:
          v1 = "FLAG_REPORT_VIEW_IDS";
          break;
        case 32:
          v1 = "FLAG_REQUEST_FILTER_KEY_EVENTS";
          break;
        default:
          v1 = null;
          break;
      }
      return v1;
    }

    public static boolean getCanRetrieveWindowContent(
            android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return m.a(p0);
    }

    public static int getCapabilities(
            android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return m.f(p0);
    }

    public static String getDescription(
            android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return m.b(p0);
    }

    public static String getId(android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return m.c(p0);
    }

    public static android.content.pm.ResolveInfo getResolveInfo(
            android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return m.d(p0);
    }

    public static String getSettingsActivityName(
            android.accessibilityservice.AccessibilityServiceInfo p0)
    {
      return m.e(p0);
    }

}
