// Decompiled from classes.dex (SourceFile: WebImage.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.images;

import android.net.Uri;
import com.google.android.gms.internal.hl;
public final class WebImage implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final int a;
    private final android.net.Uri b;
    private final int c;
    private final int d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.common.images.b();
    }

    WebImage(int p0, android.net.Uri p1, int p2, int p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    }

    private WebImage(android.net.Uri p0)
    {
      this(p0, 0, 0);
    }

    private WebImage(android.net.Uri p0, int p1, int p2)
    {
      this(1, p0, p1, p2);
      if ( p0 == null )
        throw new IllegalArgumentException("url cannot be null");
      if ( p1 < 0 || p2 < 0 )
        throw new IllegalArgumentException("width and height must not be negative");
    }

    public WebImage(org.json.JSONObject p0)
    {
      this(c(p0), p0.optInt("width", 0), p0.optInt("height", 0));
    }

    private static android.net.Uri c(org.json.JSONObject p0)
    {
      android.net.Uri v1;
      v1 = null;
      if ( p0.has("url") )
      {
        try
        {
          return Uri.parse(p0.getString("url"));
        }
        catch ( org.json.JSONException e )
        {
        }
      }
      return v1;
    }

    final int a()
    {
      return this.a;
    }

    public final android.net.Uri b()
    {
      return this.b;
    }

    public final int c()
    {
      return this.c;
    }

    public final int d()
    {
      return this.d;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final org.json.JSONObject e()
    {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("url", this.b.toString());
        v1.put("width", this.c);
        v1.put("height", this.d);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.common.images.WebImage v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 != null && p0 instanceof com.google.android.gms.common.images.WebImage )
        {
          v4 = (com.google.android.gms.common.images.WebImage)p0;
          if ( !hl.equal(this.b, v4.b) || this.c != v4.c || this.d != v4.d )
            return false;
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[3];
      v1[0] = this.b;
      v1[1] = Integer.valueOf(this.c);
      v1[2] = Integer.valueOf(this.d);
      return hl.hashCode(v1);
    }

    public final String toString()
    {
      Object[] v1;
      v1 = new Object[3];
      v1[0] = Integer.valueOf(this.c);
      v1[1] = Integer.valueOf(this.d);
      v1[2] = this.b.toString();
      return String.format("Image %dx%d %s", v1);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.common.images.b.a(this, p0, p1);
    }

}
