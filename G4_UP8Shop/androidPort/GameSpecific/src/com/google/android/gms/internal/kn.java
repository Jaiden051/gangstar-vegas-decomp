// Decompiled from classes.dex (SourceFile: kn.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.plus.Plus;
public final class kn implements com.google.android.gms.plus.People {
    // Methods
    public kn()
    {
      super();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.plus.People$LoadPeopleResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            String p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.internal.kn$1(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.plus.People$LoadPeopleResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.internal.kn$2(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.plus.People$LoadPeopleResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            java.util.Collection<String> p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.internal.kn$4(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.plus.People$LoadPeopleResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String[] p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.internal.kn$5(this, p1));
    }

    public final com.google.android.gms.plus.model.people.Person a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Plus.a(p0, Plus.a).h();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.plus.People$LoadPeopleResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.internal.kn$3(this));
    }

}
