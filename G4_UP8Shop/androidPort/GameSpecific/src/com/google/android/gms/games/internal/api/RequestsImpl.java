// Decompiled from classes.dex (SourceFile: RequestsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.games.Games;
public final class RequestsImpl implements com.google.android.gms.games.request.Requests {
    // Methods
    public RequestsImpl()
    {
      super();
    }

    public final android.content.Intent a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            byte[] p2,
            int p3,
            android.graphics.Bitmap p4,
            String p5)
    {
      return Games.c(p0).a(p1, p2, p3, p4, p5);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.request.Requests$LoadRequestsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            int p2,
            int p3)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.RequestsImpl$3(this, p1, p2, p3));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.request.Requests$UpdateRequestsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      java.util.ArrayList v3;
      String[] v4;
      v3 = new java.util.ArrayList();
      v3.add(p1);
      if ( v3 != null )
        v4 = (String[])v3.toArray(new String[v3.size()]);
      else
        v4 = null;
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.RequestsImpl$1(this, v4));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.request.Requests$UpdateRequestsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            java.util.List<String> p1)
 throws android.os.RemoteException {
      String[] v3;
      if ( p1 != null )
        v3 = (String[])p1.toArray(new String[p1.size()]);
      else
        v3 = null;
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.RequestsImpl$1(this, v3));
    }

    public final java.util.ArrayList<com.google.android.gms.games.request.GameRequest> a(
            android.content.Intent p0)
    {
      if ( p0 != null )
        return this.a(p0.getExtras());
      else
        return new java.util.ArrayList();
    }

    public final java.util.ArrayList<com.google.android.gms.games.request.GameRequest> a(android.os.Bundle p0)
    {
      java.util.ArrayList v4;
      java.util.ArrayList v5;
      int v6;
      int i;
      if ( p0 == null || !p0.containsKey("requests") )
        return new java.util.ArrayList();
      v4 = (java.util.ArrayList)p0.get("requests");
      v5 = new java.util.ArrayList();
      v6 = v4.size();
      for ( i = 0; i < v6; ++i )
        v5.add((com.google.android.gms.games.request.GameRequest)v4.get(i));
      return v5;
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      Games.c(p0).r();
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.request.OnRequestReceivedListener p1)
    {
      Games.c(p0).a(p1);
    }

    public final android.content.Intent b(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).x();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.request.Requests$UpdateRequestsResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      java.util.ArrayList v3;
      String[] v4;
      v3 = new java.util.ArrayList();
      v3.add(p1);
      if ( v3 != null )
        v4 = (String[])v3.toArray(new String[v3.size()]);
      else
        v4 = null;
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.RequestsImpl$2(this, v4));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.request.Requests$UpdateRequestsResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            java.util.List<String> p1)
 throws android.os.RemoteException {
      String[] v3;
      if ( p1 != null )
        v3 = (String[])p1.toArray(new String[p1.size()]);
      else
        v3 = null;
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.RequestsImpl$2(this, v3));
    }

    public final int c(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).y();
    }

    public final int d(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).z();
    }

}
