// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadRequestsResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.games.internal.constants.RequestType;
final class GamesClientImpl$LoadRequestsResultImpl implements com.google.android.gms.games.request.Requests$LoadRequestsResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final android.os.Bundle b;

    // Methods
    GamesClientImpl$LoadRequestsResultImpl(com.google.android.gms.common.api.Status p0, android.os.Bundle p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.games.request.GameRequestBuffer a(int p0)
    {
      String v2;
      v2 = RequestType.cm(p0);
      if ( this.b.containsKey(v2) )
        return new com.google.android.gms.games.request.GameRequestBuffer((com.google.android.gms.common.data.DataHolder)this.b.get(v2));
      else
        return null;
    }

    public final void d()
    {
      java.util.Iterator v1;
      com.google.android.gms.common.data.DataHolder v2;
      v1 = this.b.keySet().iterator();
      while ( v1.hasNext() )
      {
        v2 = (com.google.android.gms.common.data.DataHolder)this.b.getParcelable((String)v1.next());
        if ( v2 != null )
          v2.i();
      }
    }

}
