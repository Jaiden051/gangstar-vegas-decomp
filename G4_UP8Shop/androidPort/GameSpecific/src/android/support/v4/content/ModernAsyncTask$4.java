// Decompiled from classes.dex (SourceFile: ModernAsyncTask$4.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

class ModernAsyncTask$4 {
    // Fields
    static final int[] $SwitchMap$android$support$v4$content$ModernAsyncTask$Status;

    // Methods
    static
    {
      $SwitchMap$android$support$v4$content$ModernAsyncTask$Status = new int[ModernAsyncTask$Status.values().length];
      try
      {
        $SwitchMap$android$support$v4$content$ModernAsyncTask$Status[ModernAsyncTask$Status.RUNNING.ordinal()] = 1;
      }
      catch ( NoSuchFieldError e )
      {
      }
      try
      {
        $SwitchMap$android$support$v4$content$ModernAsyncTask$Status[ModernAsyncTask$Status.FINISHED.ordinal()] = 2;
      }
      catch ( NoSuchFieldError e )
      {
      }
    }

}
