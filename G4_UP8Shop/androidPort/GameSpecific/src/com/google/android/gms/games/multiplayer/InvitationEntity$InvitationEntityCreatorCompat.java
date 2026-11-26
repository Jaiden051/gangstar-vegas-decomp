// Decompiled from classes.dex (SourceFile: InvitationEntity$InvitationEntityCreatorCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

import com.google.android.gms.games.GameEntity;
final class InvitationEntity$InvitationEntityCreatorCompat extends com.google.android.gms.games.multiplayer.InvitationEntityCreator {
    // Methods
    InvitationEntity$InvitationEntityCreatorCompat()
    {
      super();
    }

    public final com.google.android.gms.games.multiplayer.InvitationEntity a(
            android.os.Parcel p0)
    {
      com.google.android.gms.games.GameEntity v4;
      String String;
      long Long;
      int Int;
      com.google.android.gms.games.multiplayer.ParticipantEntity v8;
      int v9;
      java.util.ArrayList v10;
      int i;
      if ( InvitationEntity.b(InvitationEntity.gM())
        || InvitationEntity.aQ(com.google.android.gms.games.multiplayer.InvitationEntity.class.getCanonicalName()) )
      {
        return super.a(p0);
      }
      v4 = (com.google.android.gms.games.GameEntity)com.google.android.gms.games.GameEntity.CREATOR.createFromParcel(p0);
      String = p0.readString();
      Long = p0.readLong();
      Int = p0.readInt();
      v8 = (com.google.android.gms.games.multiplayer.ParticipantEntity)com.google.android.gms.games.multiplayer.ParticipantEntity.CREATOR.createFromParcel(p0);
      v9 = p0.readInt();
      v10 = new java.util.ArrayList(v9);
      for ( i = 0; i < v9; ++i )
        v10.add(ParticipantEntity.CREATOR.createFromParcel(p0));
      return new com.google.android.gms.games.multiplayer.InvitationEntity(2, v4, String, Long, Int, v8, v10, -1, 0);
    }

    /* synthetic */ public final Object createFromParcel(
            android.os.Parcel p0)
    {
      return this.a(p0);
    }

}
