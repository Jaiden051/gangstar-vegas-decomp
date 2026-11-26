// Decompiled from classes.dex (SourceFile: PlusShare.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus;

import android.text.TextUtils;
import android.util.Log;
public final class PlusShare {
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
    public static java.lang.String k;
    public static java.lang.String l;
    public static java.lang.String m;

    // Methods
    protected PlusShare()
    {
      super();
      throw new AssertionError();
    }

    public static android.os.Bundle a(String p0, String p1, android.net.Uri p2)
    {
      android.os.Bundle v3;
      v3 = new android.os.Bundle();
      v3.putString("title", p0);
      v3.putString("description", p1);
      if ( p2 != null )
        v3.putString("thumbnailUrl", p2.toString());
      return v3;
    }

    protected static boolean bv(String p0)
    {
      boolean v1;
      v1 = false;
      if ( TextUtils.isEmpty(p0) )
      {
        Log.e("GooglePlusPlatform", "The provided deep-link ID is empty.");
      }
      else if ( p0.contains(" ") )
      {
        Log.e("GooglePlusPlatform", "Spaces are not allowed in deep-link IDs.");
      }
      else
      {
        return true;
      }
      return v1;
    }

    public static com.google.android.gms.plus.model.people.Person createPerson(String p0, String p1)
    {
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException("MinimalPerson ID must not be empty.");
      if ( TextUtils.isEmpty(p1) )
        throw new IllegalArgumentException("Display name must not be empty.");
      return (com.google.android.gms.plus.model.people.Person)new com.google.android.gms.internal.kt(p1, p0, null, 0, null);
    }

    public static String getDeepLinkId(android.content.Intent p0)
    {
      String v1;
      v1 = null;
      if ( p0 != null && p0.getData() != null )
        return p0.getData().getQueryParameter("deep_link_id");
      return v1;
    }

}
