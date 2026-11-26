// Decompiled from classes.dex (SourceFile: LocalBroadcastManager$ReceiverRecord.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

class LocalBroadcastManager$ReceiverRecord {
    // Fields
    boolean broadcasting;
    final android.content.IntentFilter filter;
    final android.content.BroadcastReceiver receiver;

    // Methods
    LocalBroadcastManager$ReceiverRecord(android.content.IntentFilter p0, android.content.BroadcastReceiver p1)
    {
      super();
      this.filter = p0;
      this.receiver = p1;
    }

    public String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder(128);
      v1.append("Receiver{");
      v1.append(this.receiver);
      v1.append(" filter=");
      v1.append(this.filter);
      v1.append("}");
      return v1.toString();
    }

}
