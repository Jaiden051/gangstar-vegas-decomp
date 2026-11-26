// Decompiled from classes.dex (SourceFile: ZInvitationCluster.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.multiplayer;

import com.google.android.gms.internal.gy;
import com.google.android.gms.internal.hl;
public final class ZInvitationCluster implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.games.multiplayer.Invitation {
    // Fields
    public static final com.google.android.gms.games.internal.multiplayer.InvitationClusterCreator CREATOR;
    private final int c;
    private final java.util.ArrayList d;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.internal.multiplayer.InvitationClusterCreator();
    }

    ZInvitationCluster(int p0, java.util.ArrayList<com.google.android.gms.games.multiplayer.InvitationEntity> p1)
    {
      super();
      this.c = p0;
      this.d = p1;
      this.m();
    }

    private void m()
    {
      com.google.android.gms.games.multiplayer.Invitation v1;
      int v2;
      int i;
      gy.A(!this.d.isEmpty());
      v1 = (com.google.android.gms.games.multiplayer.Invitation)this.d.get(0);
      v2 = this.d.size();
      for ( i = 1; i < v2; ++i )
        gy.a(
          v1.e().equals(((com.google.android.gms.games.multiplayer.Invitation)this.d.get(i)).e()),
          "All the invitations must be from the same inviter");
    }

    private com.google.android.gms.games.multiplayer.Invitation n()
    {
      return (com.google.android.gms.games.multiplayer.Invitation)this;
    }

    public final int a()
    {
      return this.c;
    }

    public final java.util.ArrayList<com.google.android.gms.games.multiplayer.Invitation> b()
    {
      return new java.util.ArrayList(this.d);
    }

    public final com.google.android.gms.games.Game c()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    public final String d()
    {
      return ((com.google.android.gms.games.multiplayer.InvitationEntity)this.d.get(0)).d();
    }

    public final int describeContents()
    {
      return 0;
    }

    public final com.google.android.gms.games.multiplayer.Participant e()
    {
      return ((com.google.android.gms.games.multiplayer.InvitationEntity)this.d.get(0)).e();
    }

    public final boolean equals(Object p0)
    {
      com.google.android.gms.games.internal.multiplayer.ZInvitationCluster v4;
      int v5;
      int i;
      if ( !(p0 instanceof com.google.android.gms.games.internal.multiplayer.ZInvitationCluster) )
        return false;
      if ( this == p0 )
        return true;
      v4 = (com.google.android.gms.games.internal.multiplayer.ZInvitationCluster)p0;
      if ( v4.d.size() != this.d.size() )
        return false;
      v5 = this.d.size();
      for ( i = 0; i < v5; ++i )
      {
        if ( !((com.google.android.gms.games.multiplayer.Invitation)this.d.get(i)).equals((com.google.android.gms.games.multiplayer.Invitation)v4.d.get(i)) )
          return false;
      }
      return true;
    }

    public final long f()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return hl.hashCode(this.d.toArray());
    }

    public final boolean i_()
    {
      return true;
    }

    public final int j()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    public final int k()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    public final java.util.ArrayList<com.google.android.gms.games.multiplayer.Participant> l()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    public final int o_()
    {
      throw new UnsupportedOperationException("Method not supported on a cluster");
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      InvitationClusterCreator.a(this, p0, p1);
    }

}
