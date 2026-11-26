// Decompiled from classes.dex (SourceFile: GamesDataChangeUris.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.data;

import android.net.Uri;
public final class GamesDataChangeUris {
    // Fields
    public static final android.net.Uri a;
    public static final android.net.Uri b;
    private static final android.net.Uri c;

    // Methods
    static
    {
      android.net.Uri v0; // RETVAL
    
      v0 = Uri.parse("content://com.google.android.gms.games/").buildUpon().appendPath("data_change").build();
      c = v0;
      a = v0.buildUpon().appendPath("invitations").build();
      b = c.buildUpon().appendEncodedPath("players").build();
    }

    public GamesDataChangeUris()
    {
      super();
    }

}
