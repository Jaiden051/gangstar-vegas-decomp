// Decompiled from classes.dex (SourceFile: PlayerEntity$PlayerEntityCreatorCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

import android.net.Uri;
final class PlayerEntity$PlayerEntityCreatorCompat extends com.google.android.gms.games.PlayerEntityCreator {
    // Methods
    PlayerEntity$PlayerEntityCreatorCompat()
    {
      super();
    }

    public final com.google.android.gms.games.PlayerEntity a(android.os.Parcel p0)
    {
      String String;
      String v5;
      String v6;
      String v7;
      android.net.Uri v8;
      android.net.Uri v9;
      if ( PlayerEntity.b(PlayerEntity.gM())
        || PlayerEntity.aQ(com.google.android.gms.games.PlayerEntity.class.getCanonicalName()) )
      {
        return super.a(p0);
      }
      String = p0.readString();
      v5 = p0.readString();
      v6 = p0.readString();
      v7 = p0.readString();
      if ( v6 != null )
        v8 = Uri.parse(v6);
      else
        v8 = null;
      if ( v7 != null )
        v9 = Uri.parse(v7);
      else
        v9 = null;
      return new com.google.android.gms.games.PlayerEntity(10, String, v5, v8, v9, p0.readLong(), -1, -1, null, null, null, null, null, true);
    }

    /* synthetic */ public final Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

}
