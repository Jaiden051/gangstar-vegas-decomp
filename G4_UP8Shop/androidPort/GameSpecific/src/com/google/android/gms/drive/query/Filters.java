// Decompiled from classes.dex (SourceFile: Filters.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query;

import com.google.android.gms.drive.query.internal.Operator;
public class Filters {
    // Methods
    public Filters()
    {
      super();
    }

    public static com.google.android.gms.drive.query.Filter and(
            com.google.android.gms.drive.query.Filter p0,
            com.google.android.gms.drive.query.Filter[] p1)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.LogicalFilter(Operator.f, p0, p1);
    }

    public static com.google.android.gms.drive.query.Filter and(
            Iterable<com.google.android.gms.drive.query.Filter> p0)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.LogicalFilter(Operator.f, p0);
    }

    public static com.google.android.gms.drive.query.Filter contains(
            com.google.android.gms.drive.metadata.SearchableMetadataField<String> p0,
            String p1)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.ComparisonFilter(Operator.i, p0, p1);
    }

    public static <T> com.google.android.gms.drive.query.Filter eq(
            com.google.android.gms.drive.metadata.SearchableMetadataField<T> p0,
            T p1)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.ComparisonFilter(Operator.a, p0, p1);
    }

    public static <T extends Comparable<T>> com.google.android.gms.drive.query.Filter greaterThan(
            com.google.android.gms.drive.metadata.SearchableOrderedMetadataField<T> p0,
            T p1)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.ComparisonFilter(Operator.d, (com.google.android.gms.drive.metadata.SearchableMetadataField)p0, p1);
    }

    public static <T extends Comparable<T>> com.google.android.gms.drive.query.Filter greaterThanEquals(
            com.google.android.gms.drive.metadata.SearchableOrderedMetadataField<T> p0,
            T p1)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.ComparisonFilter(Operator.e, (com.google.android.gms.drive.metadata.SearchableMetadataField)p0, p1);
    }

    public static <T> com.google.android.gms.drive.query.Filter in(
            com.google.android.gms.drive.metadata.SearchableCollectionMetadataField<T> p0,
            T p1)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.InFilter(p0, p1);
    }

    public static <T extends Comparable<T>> com.google.android.gms.drive.query.Filter lessThan(
            com.google.android.gms.drive.metadata.SearchableOrderedMetadataField<T> p0,
            T p1)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.ComparisonFilter(Operator.b, (com.google.android.gms.drive.metadata.SearchableMetadataField)p0, p1);
    }

    public static <T extends Comparable<T>> com.google.android.gms.drive.query.Filter lessThanEquals(
            com.google.android.gms.drive.metadata.SearchableOrderedMetadataField<T> p0,
            T p1)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.ComparisonFilter(Operator.c, (com.google.android.gms.drive.metadata.SearchableMetadataField)p0, p1);
    }

    public static com.google.android.gms.drive.query.Filter not(com.google.android.gms.drive.query.Filter p0)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.NotFilter(p0);
    }

    public static com.google.android.gms.drive.query.Filter or(
            com.google.android.gms.drive.query.Filter p0,
            com.google.android.gms.drive.query.Filter[] p1)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.LogicalFilter(Operator.g, p0, p1);
    }

    public static com.google.android.gms.drive.query.Filter or(
            Iterable<com.google.android.gms.drive.query.Filter> p0)
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.LogicalFilter(Operator.g, p0);
    }

    public static com.google.android.gms.drive.query.Filter sharedWithMe()
    {
      return (com.google.android.gms.drive.query.Filter)new com.google.android.gms.drive.query.internal.FieldOnlyFilter((com.google.android.gms.drive.metadata.SearchableMetadataField)SearchableField.e);
    }

}
