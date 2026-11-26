// Decompiled from classes.dex (SourceFile: AclsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

public final class AclsImpl implements com.google.android.gms.games.internal.game.Acls {
    // Methods
    public AclsImpl()
    {
      super();
    }

    private static com.google.android.gms.games.internal.game.Acls$LoadAclResult x(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.internal.game.Acls$LoadAclResult)new com.google.android.gms.games.internal.api.AclsImpl$1(p0);
    }

    /* synthetic */ static com.google.android.gms.games.internal.game.Acls$LoadAclResult y(
            com.google.android.gms.common.api.Status p0)
    {
      return x(p0);
    }

}
