// Decompiled from classes.dex (SourceFile: CastMediaControlIntent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import android.text.TextUtils;
import com.google.android.gms.internal.gj;
public final class CastMediaControlIntent {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    public static java.lang.String f;
    public static java.lang.String g;
    public static java.lang.String h;
    public static java.lang.String i;
    public static java.lang.String j;
    public static int k;
    public static int l;
    public static int m;

    // Methods
    private CastMediaControlIntent()
    {
      super();
    }

    private static String a(String p0, String p1, java.util.Collection<String> p2)
    {
      StringBuffer v3;
      java.util.Iterator v4;
      CharSequence v5;
      v3 = new StringBuffer(p0);
      if ( p1 != null )
      {
        if ( !p1.matches("[A-F0-9]+") && !p1.equals("00000000-0000-0000-0000-000000000000") )
          throw new IllegalArgumentException("Invalid application ID: " + p1);
        v3.append("/").append(p1);
      }
      if ( p2 != null )
      {
        if ( p2.isEmpty() )
          throw new IllegalArgumentException("Must specify at least one namespace");
        v4 = p2.iterator();
        while ( v4.hasNext() )
        {
          v5 = (String)v4.next();
          if ( TextUtils.isEmpty(v5) || ((String)v5).trim().equals("") )
            throw new IllegalArgumentException("Namespaces must not be null or empty");
        }
        if ( p1 == null )
          v3.append("/");
        v3.append("/").append(TextUtils.join(",", p2));
      }
      return v3.toString();
    }

    public static String categoryForCast(String p0)
    {
      if ( p0 == null )
        throw new IllegalArgumentException("applicationId cannot be null");
      return a("com.google.android.gms.cast.CATEGORY_CAST", p0, null);
    }

    public static String categoryForCast(String p0, java.util.Collection<String> p1)
    {
      if ( p0 == null )
        throw new IllegalArgumentException("applicationId cannot be null");
      if ( p1 == null )
        throw new IllegalArgumentException("namespaces cannot be null");
      return a("com.google.android.gms.cast.CATEGORY_CAST", p0, p1);
    }

    public static String categoryForCast(java.util.Collection<String> p0)
    {
      if ( p0 == null )
        throw new IllegalArgumentException("namespaces cannot be null");
      return a("com.google.android.gms.cast.CATEGORY_CAST", null, p0);
    }

    public static String categoryForRemotePlayback()
    {
      return a("com.google.android.gms.cast.CATEGORY_CAST_REMOTE_PLAYBACK", null, null);
    }

    public static String categoryForRemotePlayback(String p0)
    {
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException("applicationId cannot be null or empty");
      return a("com.google.android.gms.cast.CATEGORY_CAST_REMOTE_PLAYBACK", p0, null);
    }

    public static String languageTagForLocale(java.util.Locale p0)
    {
      return gj.b(p0);
    }

}
