// Decompiled from classes.dex (SourceFile: Query$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query;

import com.google.android.gms.drive.query.internal.Operator;
public class Query$Builder {
    // Fields
    private final java.util.List a;
    private java.lang.String b;
    private com.google.android.gms.drive.query.SortOrder c;

    // Methods
    public Query$Builder()
    {
      super();
      this.a = new java.util.ArrayList();
    }

    public final com.google.android.gms.drive.query.Query$Builder a(
            com.google.android.gms.drive.query.Filter p0)
    {
      if ( !(p0 instanceof com.google.android.gms.drive.query.internal.MatchAllFilter) )
        this.a.add(p0);
      return this;
    }

    public final com.google.android.gms.drive.query.Query$Builder a(
            com.google.android.gms.drive.query.SortOrder p0)
    {
      this.c = p0;
      return this;
    }

    public final com.google.android.gms.drive.query.Query$Builder a(String p0)
    {
      this.b = p0;
      return this;
    }

    public final com.google.android.gms.drive.query.Query a()
    {
      return new com.google.android.gms.drive.query.Query(new com.google.android.gms.drive.query.internal.LogicalFilter(Operator.f, this.a), this.b, this.c);
    }

}
