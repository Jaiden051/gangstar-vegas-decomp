// Decompiled from classes.dex (SourceFile: Status.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import com.google.android.gms.internal.hl;
public final class Status implements com.google.android.gms.common.api.Result, com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.common.api.StatusCreator CREATOR;
    public static final com.google.android.gms.common.api.Status a;
    public static final com.google.android.gms.common.api.Status b;
    public static final com.google.android.gms.common.api.Status c;
    public static final com.google.android.gms.common.api.Status d;
    public static final com.google.android.gms.common.api.Status e;
    private final int f;
    private final int g;
    private final java.lang.String h;
    private final android.app.PendingIntent i;

    // Methods
    static
    {
      a = new com.google.android.gms.common.api.Status(0);
      b = new com.google.android.gms.common.api.Status(14);
      c = new com.google.android.gms.common.api.Status(8);
      d = new com.google.android.gms.common.api.Status(15);
      e = new com.google.android.gms.common.api.Status(16);
      CREATOR = new com.google.android.gms.common.api.StatusCreator();
    }

    public Status(int p0)
    {
      this(1, p0, null, null);
    }

    Status(int p0, int p1, String p2, android.app.PendingIntent p3)
    {
      super();
      this.f = p0;
      this.g = p1;
      this.h = p2;
      this.i = p3;
    }

    public Status(int p0, String p1, android.app.PendingIntent p2)
    {
      this(1, p0, p1, p2);
    }

    private void a(android.app.Activity p0, int p1)
 throws android.content.IntentSender.SendIntentException {
      if ( this.i != null )
        p0.startIntentSenderForResult(this.i.getIntentSender(), p1, null, 0, 0, 0);
    }

    private boolean i()
    {
      return this.i != null;
    }

    private boolean j()
    {
      return this.g == 14;
    }

    private android.app.PendingIntent k()
    {
      return this.i;
    }

    private String l()
    {
      if ( this.h != null )
        return this.h;
      else
        return CommonStatusCodes.getStatusCodeString(this.g);
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this;
    }

    final android.app.PendingIntent b()
    {
      return this.i;
    }

    public final String c()
    {
      return this.h;
    }

    final int d()
    {
      return this.f;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final boolean e()
    {
      return this.g <= 0;
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.common.api.Status v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.common.api.Status )
      {
        v4 = (com.google.android.gms.common.api.Status)p0;
        if ( this.f == v4.f && this.g == v4.g && hl.equal(this.h, v4.h) )
          return hl.equal(this.i, v4.i);
      }
      return v2;
    }

    public final boolean f()
    {
      return this.g == 16;
    }

    public final int g()
    {
      return this.g;
    }

    public final com.google.android.gms.common.ConnectionResult h()
    {
      return new com.google.android.gms.common.ConnectionResult(this.g, this.i);
    }

    public final int hashCode()
    {
      Object[] v1;
      v1 = new Object[4];
      v1[0] = Integer.valueOf(this.f);
      v1[1] = Integer.valueOf(this.g);
      v1[2] = this.h;
      v1[3] = this.i;
      return hl.hashCode(v1);
    }

    public final String toString()
    {
      com.google.android.gms.internal.hl$a v1;
      String h;
      v1 = hl.e(this);
      if ( this.h != null )
        h = this.h;
      else
        h = CommonStatusCodes.getStatusCodeString(this.g);
      return v1.a("statusCode", h).a("resolution", this.i).toString();
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      StatusCreator.a(this, p0, p1);
    }

}
