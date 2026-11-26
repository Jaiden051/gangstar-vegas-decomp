// Decompiled from classes.dex (SourceFile: hq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
public class hq {
    // Methods
    public static String a(
            String p0,
            String p1,
            android.content.Context p2,
            android.util.AttributeSet p3,
            boolean p4,
            boolean p5,
            String p6)
    {
      String AttributeValue;
      String v8;
      String PackageName;
      android.util.TypedValue v10;
      if ( p3 != null )
        AttributeValue = p3.getAttributeValue(p0, p1);
      else
        AttributeValue = null;
      if ( AttributeValue != null && AttributeValue.startsWith("@string/") && p4 )
      {
        v8 = AttributeValue.substring(8);
        PackageName = p2.getPackageName();
        v10 = new android.util.TypedValue();
        try
        {
          p2.getResources().getValue(PackageName + ":string/" + v8, v10, true);
        }
        catch ( android.content.res.Resources.NotFoundException e )
        {
          Log.w(p6, "Could not find resource for " + p1 + ": " + AttributeValue);
        }
        if ( v10.string != null )
          AttributeValue = v10.string.toString();
        else
          Log.w(p6, "Resource " + p1 + " was not a string: " + v10);
      }
      if ( p5 && AttributeValue == null )
        Log.w(p6, "Required XML attribute \"" + p1 + "\" missing");
      return AttributeValue;
    }

}
