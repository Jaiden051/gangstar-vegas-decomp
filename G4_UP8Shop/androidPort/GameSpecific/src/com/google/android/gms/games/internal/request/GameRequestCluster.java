// Decompiled from classes.dex (SourceFile: GameRequestCluster.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.request;

import com.google.android.gms.internal.gy;
import com.google.android.gms.internal.hl;
public final class GameRequestCluster implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.games.request.GameRequest {
    // Fields
    public static final com.google.android.gms.games.internal.request.GameRequestClusterCreator CREATOR;
    private final int h;
    private final java.util.ArrayList i;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.internal.request.GameRequestClusterCreator();
    }

    GameRequestCluster(int p0, java.util.ArrayList<com.google.android.gms.games.request.GameRequestEntity> p1)
    {
      super();
      this.h = p0;
      this.i = p1;
      this.n();
    }

    private static java.util.ArrayList<com.google.android.gms.games.Player> is()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    private void n()
    {
      com.google.android.gms.games.request.GameRequest v1;
      int v2;
      int i;
      com.google.android.gms.games.request.GameRequest v4;
      gy.A(!this.i.isEmpty());
      v1 = (com.google.android.gms.games.request.GameRequest)this.i.get(0);
      v2 = this.i.size();
      for ( i = 1; i < v2; ++i )
      {
        v4 = (com.google.android.gms.games.request.GameRequest)this.i.get(i);
        gy.a(v1.x_() == v4.x_(), "All the requests must be of the same type");
        gy.a(v1.e().equals(v4.e()), "All the requests must be from the same sender");
      }
    }

    private com.google.android.gms.games.request.GameRequest o()
    {
      return (com.google.android.gms.games.request.GameRequest)this;
    }

    public final int a()
    {
      return this.h;
    }

    public final java.util.ArrayList<com.google.android.gms.games.request.GameRequest> b()
    {
      return new java.util.ArrayList(this.i);
    }

    public final String c()
    {
      return ((com.google.android.gms.games.request.GameRequestEntity)this.i.get(0)).c();
    }

    public final com.google.android.gms.games.Game d()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    public final int describeContents()
    {
      return 0;
    }

    public final com.google.android.gms.games.Player e()
    {
      return ((com.google.android.gms.games.request.GameRequestEntity)this.i.get(0)).e();
    }

    public final boolean equals(Object p0)
    {
      com.google.android.gms.games.internal.request.GameRequestCluster v4;
      int v5;
      int i;
      if ( !(p0 instanceof com.google.android.gms.games.internal.request.GameRequestCluster) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (com.google.android.gms.games.internal.request.GameRequestCluster)p0;
      if ( v4.i.size() != this.i.size() )
        return false;
      v5 = this.i.size();
      for ( i = 0; i < v5; ++i )
      {
        if ( !((com.google.android.gms.games.request.GameRequest)this.i.get(i)).equals((com.google.android.gms.games.request.GameRequest)v4.i.get(i)) )
          return false;
      }
      return true;
    }

    public final byte[] f()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    public final boolean g_(String p0)
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int h_(String p0)
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    public final int hashCode()
    {
      return hl.hashCode(this.i.toArray());
    }

    public final boolean i_()
    {
      return true;
    }

    public final long j()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    public final long k()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    public final int l()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    /* synthetic */ public final java.util.List m()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      GameRequestClusterCreator.a(this, p0, p1);
    }

    public final int x_()
    {
      return ((com.google.android.gms.games.request.GameRequestEntity)this.i.get(0)).x_();
    }

}
