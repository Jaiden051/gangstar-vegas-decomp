// Decompiled from classes.dex (SourceFile: ParticipantUtils.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer;

import com.google.android.gms.internal.hn;
public final class ParticipantUtils {
    // Methods
    private ParticipantUtils()
    {
      super();
    }

    public static boolean bn(String p0)
    {
      hn.b(p0, "Participant ID must not be null");
      return p0.startsWith("p_");
    }

    public static String getParticipantId(
            java.util.ArrayList<com.google.android.gms.games.multiplayer.Participant> p0,
            String p1)
    {
      int v2;
      int i;
      com.google.android.gms.games.multiplayer.Participant v4;
      com.google.android.gms.games.Player v5; // RETVAL
    
      v2 = p0.size();
      for ( i = 0; i < v2; ++i )
      {
        v4 = (com.google.android.gms.games.multiplayer.Participant)p0.get(i);
        v5 = v4.m();
        if ( v5 != null && v5.a().equals(p1) )
          return v4.l();
      }
      return null;
    }

}
