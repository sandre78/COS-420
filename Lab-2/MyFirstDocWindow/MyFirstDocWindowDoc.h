
// MyFirstDocWindowDoc.h : interface of the CMyFirstDocWindowDoc class
//


#pragma once


class CMyFirstDocWindowDoc : public CDocument
{
protected: // create from serialization only
	CMyFirstDocWindowDoc();
	DECLARE_DYNCREATE(CMyFirstDocWindowDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CMyFirstDocWindowDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS

#ifdef SHARED_HANDLERS
private:
	CString m_strSearchContent;
	CString m_strThumbnailContent;
#endif // SHARED_HANDLERS
};
