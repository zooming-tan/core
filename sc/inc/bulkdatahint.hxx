/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef INCLUDED_SC_BULKDATAHINT_HXX
#define INCLUDED_SC_BULKDATAHINT_HXX

#include <simplehintids.hxx>

class ScDocument;

namespace sc {

class ColumnSpanSet;

class BulkDataHint : public SfxSimpleHint
{
    struct Impl;
    Impl* mpImpl;

    BulkDataHint( const BulkDataHint& ) SAL_DELETED_FUNCTION;
    BulkDataHint& operator= ( const BulkDataHint& ) SAL_DELETED_FUNCTION;

public:
    BulkDataHint( ScDocument& rDoc, const ColumnSpanSet* pSpans );
    virtual ~BulkDataHint();

    void setSpans( const ColumnSpanSet* pSpans );
    const ColumnSpanSet* getSpans() const;

    ScDocument& getDoc();
};

}

#endif

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
