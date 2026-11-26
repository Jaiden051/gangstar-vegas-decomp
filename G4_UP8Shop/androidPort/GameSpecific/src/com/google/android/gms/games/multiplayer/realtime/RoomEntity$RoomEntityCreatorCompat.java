// Decompiled from classes.dex (SourceFile: RoomEntity$RoomEntityCreatorCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

import android.os.Bundle;
import com.google.android.gms.games.multiplayer.ParticipantEntity;
final class RoomEntity$RoomEntityCreatorCompat extends com.google.android.gms.games.multiplayer.realtime.RoomEntityCreator {
    // Methods
    RoomEntity$RoomEntityCreatorCompat()
    {
      super();
    }

    public final com.google.android.gms.games.multiplayer.realtime.RoomEntity a(
            android.os.Parcel p0)
    {
      String String;
      String v5;
      long Long;
      int Int;
      String v8;
      int v9;
      android.os.Bundle Bundle;
      int v11;
      java.util.ArrayList v12;
      int i;
      if ( RoomEntity.b(RoomEntity.gM())
        || RoomEntity.aQ(com.google.android.gms.games.multiplayer.realtime.RoomEntity.class.getCanonicalName()) )
      {
        return super.a(p0);
      }
      String = p0.readString();
      v5 = p0.readString();
      Long = p0.readLong();
      Int = p0.readInt();
      v8 = p0.readString();
      v9 = p0.readInt();
      Bundle = p0.readBundle();
      v11 = p0.readInt();
      v12 = new java.util.ArrayList(v11);
      for ( i = 0; i < v11; ++i )
        v12.add(ParticipantEntity.CREATOR.createFromParcel(p0));
      return new com.google.android.gms.games.multiplayer.realtime.RoomEntity(2, String, v5, Long, Int, v8, v9, Bundle, v12, -1);
    }

    /* synthetic */ public final Object createFromParcel(android.os.Parcel p0)
    {
      return this.a(p0);
    }

}
