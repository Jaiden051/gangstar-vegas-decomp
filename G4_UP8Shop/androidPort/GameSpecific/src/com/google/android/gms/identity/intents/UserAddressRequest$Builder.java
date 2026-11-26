// Decompiled from classes.dex (SourceFile: UserAddressRequest$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.identity.intents;

import java.util.Collections;
public final class UserAddressRequest$Builder {
    // Fields
    final com.google.android.gms.identity.intents.UserAddressRequest a;

    // Methods
    private UserAddressRequest$Builder(com.google.android.gms.identity.intents.UserAddressRequest p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ UserAddressRequest$Builder(com.google.android.gms.identity.intents.UserAddressRequest p0, int p1)
    {
      this(p0);
    }

    private com.google.android.gms.identity.intents.UserAddressRequest$Builder a(
            com.google.android.gms.identity.intents.model.CountrySpecification p0)
    {
      if ( this.a.a == null )
        this.a.a = new java.util.ArrayList();
      this.a.a.add(p0);
      return this;
    }

    private com.google.android.gms.identity.intents.UserAddressRequest$Builder a(
            java.util.Collection<com.google.android.gms.identity.intents.model.CountrySpecification> p0)
    {
      if ( this.a.a == null )
        this.a.a = new java.util.ArrayList();
      this.a.a.addAll(p0);
      return this;
    }

    private com.google.android.gms.identity.intents.UserAddressRequest a()
    {
      if ( this.a.a != null )
        this.a.a = Collections.unmodifiableList(this.a.a);
      return this.a;
    }

}
