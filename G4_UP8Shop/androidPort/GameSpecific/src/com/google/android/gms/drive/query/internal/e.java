// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

class e {
    // Methods
    static com.google.android.gms.drive.metadata.MetadataField<?> b(
            com.google.android.gms.drive.metadata.internal.MetadataBundle p0)
    {
      java.util.Set v1;
      v1 = p0.a();
      if ( v1.size() != 1 )
        throw new IllegalArgumentException("bundle should have exactly 1 populated field");
      return (com.google.android.gms.drive.metadata.MetadataField)v1.iterator().next();
    }

}
