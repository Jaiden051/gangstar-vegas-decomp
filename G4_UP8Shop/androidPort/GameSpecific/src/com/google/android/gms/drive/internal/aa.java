// Decompiled from classes.dex (SourceFile: aa.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

public interface aa extends android.os.IInterface {
    // Methods
    public abstract android.content.IntentSender a(com.google.android.gms.drive.internal.CreateFileIntentSenderRequest p0) throws android.os.RemoteException;

    public abstract android.content.IntentSender a(com.google.android.gms.drive.internal.OpenFileIntentSenderRequest p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.AddEventListenerRequest p0, com.google.android.gms.drive.internal.ac p1, java.lang.String p2, com.google.android.gms.drive.internal.ab p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.AuthorizeAccessRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.CheckResourceIdsExistRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.CloseContentsAndUpdateMetadataRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.CloseContentsRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.CreateContentsRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.CreateFileRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.CreateFolderRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.DeleteCustomPropertyRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.DeleteResourceRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.DisconnectRequest p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.GetDriveIdFromUniqueIdentifierRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.GetMetadataRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.ListParentsRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.LoadRealtimeRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.OpenContentsRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.QueryRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.RemoveEventListenerRequest p0, com.google.android.gms.drive.internal.ac p1, java.lang.String p2, com.google.android.gms.drive.internal.ab p3) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.SetResourceParentsRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.TrashResourceRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.UpdateMetadataRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.drive.internal.ab p0) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.drive.internal.QueryRequest p0, com.google.android.gms.drive.internal.ab p1) throws android.os.RemoteException;

    public abstract void b(com.google.android.gms.drive.internal.ab p0) throws android.os.RemoteException;

    public abstract void c(com.google.android.gms.drive.internal.ab p0) throws android.os.RemoteException;

    public abstract void d(com.google.android.gms.drive.internal.ab p0) throws android.os.RemoteException;

    public abstract void e(com.google.android.gms.drive.internal.ab p0) throws android.os.RemoteException;

}
