// Decompiled from classes.dex (SourceFile: Task$1.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class Task$1<TResult> implements bolts.l<TResult, Object> {
    // Fields
    final bolts.Task a;

    // Methods
    Task$1(bolts.Task p0)
    {
      super();
      this.a = p0;
    
    }

    public final bolts.Task<Void> then(bolts.Task p0)
    {
      if ( p0.a() )
        return Task.cancelled();
      if ( p0.b() )
        return Task.forError(p0.d());
      return Task.forResult(null);
    }



}
