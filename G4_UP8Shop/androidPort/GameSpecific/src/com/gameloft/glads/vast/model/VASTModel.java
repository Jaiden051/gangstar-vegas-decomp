// Decompiled from classes.dex (SourceFile: VASTModel.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.model;

import com.gameloft.glads.vast.util.VASTLog;
import com.gameloft.glads.vast.util.XmlTools;
import com.google.android.gms.internal.it;
import javax.xml.xpath.XPathConstants;
import javax.xml.xpath.XPathFactory;
public class VASTModel implements java.io.Serializable {
    // Fields
    private static java.lang.String TAG;
    private static java.lang.String combinedTrackingXPATH;
    private static java.lang.String durationXPATH;
    private static java.lang.String errorUrlXPATH;
    private static java.lang.String impressionXPATH;
    private static java.lang.String inlineLinearTrackingXPATH;
    private static java.lang.String inlineNonLinearTrackingXPATH;
    private static java.lang.String mediaFileXPATH;
    private static long serialVersionUID;
    private static java.lang.String videoClicksXPATH;
    private static java.lang.String wrapperLinearTrackingXPATH;
    private static java.lang.String wrapperNonLinearTrackingXPATH;
    private java.lang.String pickedMediaFileURL;
    private transient org.w3c.dom.Document vastsDocument;

    // Methods
    static
    {
      TAG = "VASTModel";
    }

    public VASTModel(org.w3c.dom.Document p0)
    {
      super();
      this.pickedMediaFileURL = null;
      this.vastsDocument = p0;
    }

    private java.util.List<String> getListFromXPath(String p0)
    {
      java.util.ArrayList v2;
      javax.xml.xpath.XPath v3; // RETVAL
      javax.xml.xpath.XPath v4;
      org.w3c.dom.NodeList v5;
      int i;
      VASTLog.d(TAG, "getListFromXPath");
      v2 = new java.util.ArrayList();
      v3 = XPathFactory.newInstance().newXPath();
      v4 = v3;
      try
      {
        v5 = (org.w3c.dom.NodeList)v3.evaluate(p0, this.vastsDocument, XPathConstants.NODESET);
        if ( v5 != null )
        {
          for ( i = 0; i < v5.getLength(); ++i )
            v2.add(XmlTools.getElementValue(v5.item(i)));
        }
        return v2;
      }
      catch ( Exception v7 )
      {
        VASTLog.e(TAG, v7.getMessage(), v7);
        return null;
      }
    }

    private void readObject(java.io.ObjectInputStream p0)
 throws java.io.IOException, ClassNotFoundException {
      String v2;
      VASTLog.d(TAG, "readObject: about to read");
      p0.defaultReadObject();
      v2 = (String)p0.readObject();
      VASTLog.d(TAG, "vastString data is:\n" + v2 + "\n");
      this.vastsDocument = XmlTools.stringToDocument(v2);
      VASTLog.d(TAG, "done reading");
    }

    private void writeObject(java.io.ObjectOutputStream p0)
 throws java.io.IOException {
      VASTLog.d(TAG, "writeObject: about to write");
      p0.defaultWriteObject();
      p0.writeObject(XmlTools.xmlDocumentToString(this.vastsDocument));
      VASTLog.d(TAG, "done writing");
    }

    public String getDuration()
    {
      javax.xml.xpath.XPath v1; // RETVAL
      javax.xml.xpath.XPath v2;
      org.w3c.dom.NodeList v3;
      int v4;
      String v5;
      String ElementValue; // RETVAL
    
      VASTLog.d(TAG, "getDuration");
      v1 = XPathFactory.newInstance().newXPath();
      v2 = v1;
      try
      {
        v3 = (org.w3c.dom.NodeList)v1.evaluate("//Duration", this.vastsDocument, XPathConstants.NODESET);
        if ( v3 != null )
        {
          v4 = 0;
          v5 = null;
          while ( v4 < v3.getLength() )
          {
            ElementValue = XmlTools.getElementValue(v3.item(v4++));
            v5 = ElementValue;
          }
          return v5;
        }
        else
        {
          return null;
        }
      }
      catch ( Exception v7 )
      {
        VASTLog.e(TAG, v7.getMessage(), v7);
        return null;
      }
    }

    public java.util.List<String> getErrorUrl()
    {
      VASTLog.d(TAG, "getErrorUrl");
      return this.getListFromXPath("//Error");
    }

    public java.util.List<String> getImpressions()
    {
      VASTLog.d(TAG, "getImpressions");
      return this.getListFromXPath("//Impression");
    }

    public java.util.List<com.gameloft.glads.vast.model.VASTMediaFile> getMediaFiles()
    {
      java.util.ArrayList v1;
      javax.xml.xpath.XPath v2; // RETVAL
      org.w3c.dom.NodeList v3;
      int i;
      com.gameloft.glads.vast.model.VASTMediaFile v5;
      org.w3c.dom.Node v6;
      org.w3c.dom.NamedNodeMap Attributes;
      org.w3c.dom.Node NamedItem; // RETVAL
      String NodeValue;
      org.w3c.dom.Node v10; // RETVAL
      java.math.BigInteger v11;
      org.w3c.dom.Node v12; // RETVAL
      String v13;
      org.w3c.dom.Node v14; // RETVAL
      java.math.BigInteger v15;
      org.w3c.dom.Node v16; // RETVAL
      String v17;
      org.w3c.dom.Node v18; // RETVAL
      Boolean v19;
      org.w3c.dom.Node v20; // RETVAL
      Boolean v21;
      org.w3c.dom.Node v22; // RETVAL
      String v23;
      org.w3c.dom.Node v24; // RETVAL
      java.math.BigInteger v25;
      VASTLog.d(TAG, "getMediaFiles");
      v1 = new java.util.ArrayList();
      v2 = XPathFactory.newInstance().newXPath();
      try
      {
        v3 = (org.w3c.dom.NodeList)v2.evaluate("//MediaFile", this.vastsDocument, XPathConstants.NODESET);
        if ( v3 != null )
        {
          for ( i = 0; i < v3.getLength(); ++i )
          {
            v5 = new com.gameloft.glads.vast.model.VASTMediaFile();
            v6 = v3.item(i);
            Attributes = v6.getAttributes();
            NamedItem = Attributes.getNamedItem("apiFramework");
            if ( NamedItem != null )
              NodeValue = NamedItem.getNodeValue();
            else
              NodeValue = null;
            v5.setApiFramework(NodeValue);
            v10 = Attributes.getNamedItem("bitrate");
            if ( v10 != null )
              v11 = new java.math.BigInteger(v10.getNodeValue());
            else
              v11 = null;
            v5.setBitrate(v11);
            v12 = Attributes.getNamedItem("delivery");
            if ( v12 != null )
              v13 = v12.getNodeValue();
            else
              v13 = null;
            v5.setDelivery(v13);
            v14 = Attributes.getNamedItem("height");
            if ( v14 != null )
              v15 = new java.math.BigInteger(v14.getNodeValue());
            else
              v15 = null;
            v5.setHeight(v15);
            v16 = Attributes.getNamedItem("id");
            if ( v16 != null )
              v17 = v16.getNodeValue();
            else
              v17 = null;
            v5.setId(v17);
            v18 = Attributes.getNamedItem("maintainAspectRatio");
            if ( v18 != null )
              v19 = Boolean.valueOf(v18.getNodeValue());
            else
              v19 = null;
            v5.setMaintainAspectRatio(v19);
            v20 = Attributes.getNamedItem("scalable");
            if ( v20 != null )
              v21 = Boolean.valueOf(v20.getNodeValue());
            else
              v21 = null;
            v5.setScalable(v21);
            v22 = Attributes.getNamedItem("type");
            if ( v22 != null )
              v23 = v22.getNodeValue();
            else
              v23 = null;
            v5.setType(v23);
            v24 = Attributes.getNamedItem("width");
            if ( v24 != null )
              v25 = new java.math.BigInteger(v24.getNodeValue());
            else
              v25 = null;
            v5.setWidth(v25);
            v5.setValue(XmlTools.getElementValue(v6));
            v1.add(v5);
          }
        }
        return v1;
      }
      catch ( Exception v26 )
      {
        VASTLog.e(TAG, v26.getMessage(), v26);
        return null;
      }
    }

    public String getPickedMediaFileURL()
    {
      return this.pickedMediaFileURL;
    }

    public java.util.HashMap<com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE, java.util.List<String>> getTrackingUrls()
    {
      java.util.HashMap v1;
      javax.xml.xpath.XPath v2; // RETVAL
      javax.xml.xpath.XPath v3;
      org.w3c.dom.NodeList v4;
      int i;
      org.w3c.dom.Node v6;
      String NodeValue; // RETVAL
      com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE v8;
      String ElementValue;
      java.util.ArrayList v12;
      VASTLog.d(TAG, "getTrackingUrls");
      v1 = new java.util.HashMap();
      v2 = XPathFactory.newInstance().newXPath();
      v3 = v2;
      try
      {
        v4 = (org.w3c.dom.NodeList)v2.evaluate("/VASTS/VAST/Ad/InLine/Creatives/Creative/Linear/TrackingEvents/Tracking|/VAST" +
                                               "S/VAST/Ad/InLine/Creatives/Creative/NonLinearAds/TrackingEvents/Tracking|/VAS" +
                                               "TS/VAST/Ad/Wrapper/Creatives/Creative/Linear/TrackingEvents/Tracking|/VASTS/V" +
                                               "AST/Ad/Wrapper/Creatives/Creative/NonLinearAds/TrackingEvents/Tracking", this.vastsDocument, XPathConstants.NODESET);
        if ( v4 != null )
        {
          for ( i = 0; i < v4.getLength(); ++i )
          {
            v6 = v4.item(i);
            NodeValue = v6.getAttributes().getNamedItem("event").getNodeValue();
            try
            {
              v8 = TRACKING_EVENTS_TYPE.valueOf(NodeValue);
              ElementValue = XmlTools.getElementValue(v6);
              if ( v1.containsKey(v8) )
              {
                ((java.util.List)v1.get(v8)).add(ElementValue);
              }
              else
              {
                v12 = new java.util.ArrayList();
                v12.add(ElementValue);
                v1.put(v8, v12);
              }
              continue;
            }
            catch ( IllegalArgumentException e )
            {
              VASTLog.w(TAG, "Event:" + NodeValue + " is not valid. Skipping it.");
            }
          }
        }
        return v1;
      }
      catch ( Exception v10 )
      {
        VASTLog.e(TAG, v10.getMessage(), v10);
        return null;
      }
    }

    public org.w3c.dom.Document getVastsDocument()
    {
      return this.vastsDocument;
    }

    public com.gameloft.glads.vast.model.VideoClicks getVideoClicks()
    {
      com.gameloft.glads.vast.model.VideoClicks v1;
      javax.xml.xpath.XPath v2; // RETVAL
      javax.xml.xpath.XPath v3;
      org.w3c.dom.NodeList v4;
      int i;
      org.w3c.dom.NodeList ChildNodes;
      int j;
      org.w3c.dom.Node v8;
      String NodeName;
      VASTLog.d(TAG, "getVideoClicks");
      v1 = new com.gameloft.glads.vast.model.VideoClicks();
      v2 = XPathFactory.newInstance().newXPath();
      v3 = v2;
      try
      {
        v4 = (org.w3c.dom.NodeList)v2.evaluate("//VideoClicks", this.vastsDocument, XPathConstants.NODESET);
        if ( v4 != null )
        {
          for ( i = 0; i < v4.getLength(); ++i )
          {
            ChildNodes = v4.item(i).getChildNodes();
            for ( j = 0; j < ChildNodes.getLength(); ++j )
            {
              v8 = ChildNodes.item(j);
              NodeName = v8.getNodeName();
              if ( NodeName.equalsIgnoreCase("ClickTracking") )
              {
                v1.getClickTracking().add(XmlTools.getElementValue(v8));
              }
              else if ( NodeName.equalsIgnoreCase("ClickThrough") )
              {
                v1.setClickThrough(XmlTools.getElementValue(v8));
              }
              else if ( NodeName.equalsIgnoreCase("CustomClick") )
              {
                v1.getCustomClick().add(XmlTools.getElementValue(v8));
              }
            }
          }
        }
        return v1;
      }
      catch ( Exception v10 )
      {
        VASTLog.e(TAG, v10.getMessage(), v10);
        return null;
      }
    }

    public void setPickedMediaFileURL(String p0)
    {
      this.pickedMediaFileURL = p0;
    }

}
