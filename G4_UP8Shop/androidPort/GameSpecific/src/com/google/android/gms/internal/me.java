// Decompiled from classes.dex (SourceFile: me.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class me extends java.io.IOException {
    // Methods
    private me(String p0)
    {
      super(p0);
    }

    static com.google.android.gms.internal.me nN()
    {
      return new com.google.android.gms.internal.me("While parsing a protocol message, the input ended unexpectedly in the mi" +
                                                    "ddle of a field.  This could mean either than the input has been truncat" +
                                                    "ed or that an embedded message misreported its own length.");
    }

    static com.google.android.gms.internal.me nO()
    {
      return new com.google.android.gms.internal.me("CodedInputStream encountered an embedded string or message which claimed" +
                                                    " to have negative size.");
    }

    static com.google.android.gms.internal.me nP()
    {
      return new com.google.android.gms.internal.me("CodedInputStream encountered a malformed varint.");
    }

    static com.google.android.gms.internal.me nQ()
    {
      return new com.google.android.gms.internal.me("Protocol message contained an invalid tag (zero).");
    }

    static com.google.android.gms.internal.me nR()
    {
      return new com.google.android.gms.internal.me("Protocol message end-group tag did not match expected tag.");
    }

    static com.google.android.gms.internal.me nS()
    {
      return new com.google.android.gms.internal.me("Protocol message tag had invalid wire type.");
    }

    static com.google.android.gms.internal.me nT()
    {
      return new com.google.android.gms.internal.me("Protocol message had too many levels of nesting.  May be malicious.  Use" +
                                                    " CodedInputStream.setRecursionLimit() to increase the depth limit.");
    }

}
