// Decompiled from classes.dex (SourceFile: fz.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.net.Uri;
public final class fz implements com.google.android.gms.appindexing.AppIndexApi, com.google.android.gms.internal.fu {
    // Methods
    public fz()
    {
      super();
    }

    static android.net.Uri a(String p0, android.net.Uri p1)
    {
      java.util.List PathSegments;
      android.net.Uri.Builder v3;
      int i;
      if ( !"android-app".equals(p1.getScheme()) )
        throw new IllegalArgumentException("Uri scheme must be android-app: " + p1);
      if ( !p0.equals(p1.getHost()) )
        throw new IllegalArgumentException("Uri host must match package name: " + p1);
      PathSegments = p1.getPathSegments();
      if ( PathSegments.isEmpty() || ((String)PathSegments.get(0)).isEmpty() )
        throw new IllegalArgumentException("Uri path must exist: " + p1);
      v3 = new android.net.Uri.Builder();
      v3.scheme((String)PathSegments.get(0));
      if ( PathSegments.size() > 1 )
      {
        v3.authority((String)PathSegments.get(1));
        for ( i = 2; i < PathSegments.size(); ++i )
          v3.appendPath((String)PathSegments.get(i));
      }
      v3.encodedQuery(p1.getEncodedQuery());
      v3.encodedFragment(p1.getEncodedFragment());
      return v3.build();
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.internal.fs[] p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.internal.fz$2(this, ((com.google.android.gms.internal.fy)p0.a(fg.a)).E().getPackageName(), p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.app.Activity p1,
            android.net.Uri p2)
 throws android.os.RemoteException {
      com.google.android.gms.internal.fs[] v4;
      v4 = new com.google.android.gms.internal.fs[1];
      v4[0] = new com.google.android.gms.internal.fs(fs.a(
                                                       ((com.google.android.gms.internal.fy)p0.a(fg.a)).E().getPackageName(),
                                                       new android.content.Intent("android.intent.action.VIEW", a(((com.google.android.gms.internal.fy)p0.a(fg.a)).E().getPackageName(), p2))), System.currentTimeMillis(), 3);
      return this.a(p0, v4);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.app.Activity p1,
            android.net.Uri p2,
            String p3,
            android.net.Uri p4,
            java.util.List<com.google.android.gms.appindexing.AppIndexApi$AppIndexingLink> p5)
 throws android.os.RemoteException, com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      com.google.android.gms.internal.fs[] v7;
      v7 = new com.google.android.gms.internal.fs[1];
      v7[0] = new com.google.android.gms.internal.fs(((com.google.android.gms.internal.fy)p0.a(fg.a)).E().getPackageName(), new android.content.Intent("android.intent.action.VIEW", a(((com.google.android.gms.internal.fy)p0.a(fg.a)).E().getPackageName(), p2)), p3, p4, null, p5);
      return this.a(p0, v7);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.content.Intent p1)
 throws android.os.RemoteException {
      com.google.android.gms.internal.fs[] v3;
      v3 = new com.google.android.gms.internal.fs[1];
      v3[0] = new com.google.android.gms.internal.fs(fs.a(
                                                       ((com.google.android.gms.internal.fy)p0.a(fg.a)).E().getPackageName(),
                                                       p1), System.currentTimeMillis(), 3);
      return this.a(p0, v3);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            android.content.Intent p1,
            String p2,
            android.net.Uri p3,
            java.util.List<com.google.android.gms.appindexing.AppIndexApi$AppIndexingLink> p4)
 throws android.os.RemoteException, com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      com.google.android.gms.internal.fs[] v6;
      v6 = new com.google.android.gms.internal.fs[1];
      v6[0] = new com.google.android.gms.internal.fs(((com.google.android.gms.internal.fy)p0.a(fg.a)).E().getPackageName(), p1, p2, p3, null, p4);
      return this.a(p0, v6);
    }

}
