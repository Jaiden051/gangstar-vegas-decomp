// Decompiled from classes.dex (SourceFile: ParticipantEntity$ParticipantEntityCreatorCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

import android.net.Uri;
import com.google.android.gms.games.PlayerEntity;
final class ParticipantEntity$ParticipantEntityCreatorCompat extends com.google.android.gms.games.multiplayer.ParticipantEntityCreator {
    // Methods
    ParticipantEntity$ParticipantEntityCreatorCompat()
    {
      super();
    }

    public final com.google.android.gms.games.multiplayer.ParticipantEntity a(
            android.os.Parcel p0)
    {
      int v2;
      String String;
      String v6;
      String v7; // RETVAL
      android.net.Uri v8;
      String v9; // RETVAL
      android.net.Uri v10;
      int Int;
      String v12;
      boolean v13;
      com.google.android.gms.games.PlayerEntity v14;
      v2 = 1;
      if ( ParticipantEntity.b(ParticipantEntity.gM())
        || ParticipantEntity.aQ(com.google.android.gms.games.multiplayer.ParticipantEntity.class.getCanonicalName()) )
      {
        return super.a(p0);
      }
      String = p0.readString();
      v6 = p0.readString();
      v7 = p0.readString();
      if ( v7 != null )
        v8 = Uri.parse(v7);
      else
        v8 = null;
      v9 = p0.readString();
      if ( v9 != null )
        v10 = Uri.parse(v9);
      else
        v10 = null;
      Int = p0.readInt();
      v12 = p0.readString();
      v13 = p0.readInt() > 0;
      if ( p0.readInt() <= 0 )
        v2 = 0;
      if ( v2 != 0 )
        v14 = (com.google.android.gms.games.PlayerEntity)com.google.android.gms.games.PlayerEntity.CREATOR.createFromParcel(p0);
      else
        v14 = null;
      return new com.google.android.gms.games.multiplayer.ParticipantEntity(3, String, v6, v8, v10, Int, v12, v13, v14, 7, null, null, null);
    }

    /* synthetic */ public final Object createFromParcel(
            android.os.Parcel p0)
    {
      return this.a(p0);
    }

}
