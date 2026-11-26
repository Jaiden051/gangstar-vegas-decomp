// Decompiled from classes.dex (SourceFile: is.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.drive.metadata.internal.AppVisibleCustomProperties;
import java.util.Arrays;
import java.util.Collections;
public class is extends com.google.android.gms.drive.metadata.internal.j<com.google.android.gms.drive.metadata.internal.AppVisibleCustomProperties> {
    // Methods
    public is(int p0)
    {
      super("customFileProperties", Collections.emptyList(), Arrays.asList(new String[] { "customPropertiesExtra" }), p0);
    }

    private static com.google.android.gms.drive.metadata.internal.AppVisibleCustomProperties j$586153e6(
            com.google.android.gms.common.data.DataHolder p0,
            int p1)
    {
      return (com.google.android.gms.drive.metadata.internal.AppVisibleCustomProperties)p0.f().getSparseParcelableArray("customPropertiesExtra").get(p1, AppVisibleCustomProperties.a);
    }

    /* synthetic */ protected final Object b(com.google.android.gms.common.data.DataHolder p0, int p1, int p2)
    {
      return (com.google.android.gms.drive.metadata.internal.AppVisibleCustomProperties)p0.f().getSparseParcelableArray("customPropertiesExtra").get(p1, AppVisibleCustomProperties.a);
    }

}
